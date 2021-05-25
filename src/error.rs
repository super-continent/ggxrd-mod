use thiserror::Error;

#[derive(Error, Debug)]
pub enum ModError {
    #[error("Failed to get D3D9 device: {0}")]
    GetDeviceFailed(String)
}