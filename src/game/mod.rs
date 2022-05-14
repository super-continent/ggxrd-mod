pub mod hooks;
pub mod offset;
pub mod internal;

use std::io::prelude::*;
use std::{fs::File, path::PathBuf};

// full list of character shortnames used in scripts
mod names {
    pub const ANSWER: &[u8] = b"ans";
    pub const AXL: &[u8] = b"axl";
    pub const BAIKEN: &[u8] = b"bkn";
    pub const BEDMAN: &[u8] = b"bed";
    pub const CHIPP: &[u8] = b"chp";
    pub const DIZZY: &[u8] = b"dzy";
    pub const ELPHELT: &[u8] = b"elp";
    pub const FAUST: &[u8] = b"fau";
    pub const INO: &[u8] = b"ino";
    pub const JAM: &[u8] = b"jam";
    pub const JOHNNY: &[u8] = b"jhn";
    pub const JACKO: &[u8] = b"jko";
    pub const KUM: &[u8] = b"kum";
    pub const KY: &[u8] = b"kyk";
    pub const LEO: &[u8] = b"leo";
    pub const MAY: &[u8] = b"may";
    pub const MILLIA: &[u8] = b"mll";
    pub const POTEMKIN: &[u8] = b"pot";
    pub const RAMLETHAL: &[u8] = b"ram";
    pub const RAVEN: &[u8] = b"rvn";
    pub const SIN: &[u8] = b"sin";
    pub const SLAYER: &[u8] = b"sly";
    pub const SOL: &[u8] = b"sol";
    pub const VENOM: &[u8] = b"ven";
    pub const ZATO: &[u8] = b"zat";
}

#[derive(Debug, Clone, Copy)]
pub enum ScriptFile {
    Answer,
    Axl,
    Baiken,
    Bedman,
    Chipp,
    Dizzy,
    Elphelt,
    Faust,
    Ino,
    Jam,
    Johnny,
    Jacko,
    Kum,
    Ky,
    Leo,
    May,
    Millia,
    Potemkin,
    Ramlethal,
    Raven,
    Sin,
    Slayer,
    Sol,
    Venom,
    Zato,
    Common,
}

impl ScriptFile {
    pub fn short_name(&self) -> &str {
        match self {
            ScriptFile::Answer => "ans",
            ScriptFile::Axl => "axl",
            ScriptFile::Baiken => "bkn",
            ScriptFile::Bedman => "bed",
            ScriptFile::Chipp => "chp",
            ScriptFile::Dizzy => "dzy",
            ScriptFile::Elphelt => "elp",
            ScriptFile::Faust => "fau",
            ScriptFile::Ino => "ino",
            ScriptFile::Jam => "jam",
            ScriptFile::Johnny => "jhn",
            ScriptFile::Jacko => "jko",
            ScriptFile::Kum => "kum",
            ScriptFile::Ky => "kyk",
            ScriptFile::Leo => "leo",
            ScriptFile::May => "may",
            ScriptFile::Millia => "mll",
            ScriptFile::Potemkin => "pot",
            ScriptFile::Ramlethal => "ram",
            ScriptFile::Raven => "rvn",
            ScriptFile::Sin => "sin",
            ScriptFile::Slayer => "sly",
            ScriptFile::Sol => "sol",
            ScriptFile::Venom => "ven",
            ScriptFile::Zato => "zat",
            ScriptFile::Common => "cmn",
        }
    }
}

#[derive(Debug, Clone, Copy, PartialEq)]
enum ScriptType {
    Main,
    Effect,
}

fn get_script_file(script_file: ScriptFile, file_type: ScriptType) -> Option<Vec<u8>> {
    let mut mods_path = PathBuf::from(crate::global::MODS_FOLDER);

    let mut script = Vec::new();

    let file_name = match file_type {
        ScriptType::Main => format!("{}.bbscript", script_file.short_name()),
        ScriptType::Effect => format!("{}_ef.bbscript", script_file.short_name()),
    };

    mods_path.push(file_name);

    let result = File::open(&mods_path).and_then(|mut file| file.read_to_end(&mut script));

    if result.is_ok() {
        debug!("Got script `{}`", mods_path.display());
        Some(script)
    } else {
        None
    }
}
