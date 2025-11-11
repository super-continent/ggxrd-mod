pub mod hooks;
pub mod internal;
pub mod offset;

use std::fs::File;
use std::io::prelude::*;

use serde::{Deserialize, Serialize};

use crate::global;

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

#[derive(Debug, Clone, Copy, PartialEq)]
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

#[derive(Debug, Clone, Copy, PartialEq, Eq)]
pub enum ScriptType {
    Main,
    Effect,
}

pub fn get_script_filename(script_file: ScriptFile, script_type: ScriptType) -> String {
    match script_type {
        ScriptType::Main => format!("{}.bbscript", script_file.short_name()),
        ScriptType::Effect => format!("{}_ef.bbscript", script_file.short_name()),
    }
}

fn get_script_file(script_file: ScriptFile, file_type: ScriptType) -> Option<Vec<u8>> {
    let mods_path = global::SELECTED_MOD_FOLDER.lock();

    let file_name = get_script_filename(script_file, file_type);
    let script_path = mods_path.join(file_name);

    let mut script = Vec::new();
    let result = File::open(&script_path).and_then(|mut file| file.read_to_end(&mut script));

    if result.is_ok() {
        debug!("Got script `{}`", script_path.display());
        Some(script)
    } else {
        None
    }
}

fn get_collision_file(collision_file: ScriptFile) -> Option<Vec<u8>> {
    let mods_path = global::SELECTED_MOD_FOLDER.lock();

    let file_name = format!("{}.collision", collision_file.short_name());
    let collision_path = mods_path.join(file_name);

    let mut collision = Vec::new();
    let result = File::open(&collision_path).and_then(|mut file| file.read_to_end(&mut collision));

    if result.is_ok() {
        debug!("Got collision `{}`", collision_path.display());
        Some(collision)
    } else {
        None
    }
}

#[repr(u32)]
#[derive(Serialize, Deserialize, Debug, Clone, Copy, PartialEq, Eq, Hash)]
pub enum Character {
    Sol = 0,
    Ky,
    May,
    Millia,
    Zato,
    Potemkin,
    Chipp,
    Faust,
    Axl,
    Venom,
    Slayer,
    Ino,
    Bedman,
    Ramlethal,
    Sin,
    Elphelt,
    Leo,
    Johnny,
    JackO,
    Jam,
    Haehyun,
    Raven,
    Dizzy,
    Baiken,
    Answer,
}

impl Character {
    pub fn from_number(number: usize) -> Self {
        match number {
            0 => Character::Sol,
            1 => Character::Ky,
            2 => Character::May,
            3 => Character::Millia,
            4 => Character::Zato,
            5 => Character::Potemkin,
            6 => Character::Chipp,
            7 => Character::Faust,
            8 => Character::Axl,
            9 => Character::Venom,
            10 => Character::Slayer,
            11 => Character::Ino,
            12 => Character::Bedman,
            13 => Character::Ramlethal,
            14 => Character::Sin,
            15 => Character::Elphelt,
            16 => Character::Leo,
            17 => Character::Johnny,
            18 => Character::JackO,
            19 => Character::Jam,
            20 => Character::Haehyun,
            21 => Character::Raven,
            22 => Character::Dizzy,
            23 => Character::Baiken,
            24 => Character::Answer,
            _ => panic!("Invalid character number: {}", number),
        }
    }

    pub fn to_str(&self) -> &str {
        match self {
            Character::Sol => "Sol",
            Character::Ky => "Ky",
            Character::May => "May",
            Character::Millia => "Millia",
            Character::Zato => "Zato",
            Character::Potemkin => "Potemkin",
            Character::Chipp => "Chipp",
            Character::Faust => "Faust",
            Character::Axl => "Axl",
            Character::Venom => "Venom",
            Character::Slayer => "Slayer",
            Character::Ino => "Ino",
            Character::Bedman => "Bedman",
            Character::Ramlethal => "Ramlethal",
            Character::Sin => "Sin",
            Character::Elphelt => "Elphelt",
            Character::Leo => "Leo",
            Character::Johnny => "Johnny",
            Character::JackO => "JackO",
            Character::Jam => "Jam",
            Character::Haehyun => "Haehyun",
            Character::Raven => "Raven",
            Character::Dizzy => "Dizzy",
            Character::Baiken => "Baiken",
            Character::Answer => "Answer",
        }
    }
}
