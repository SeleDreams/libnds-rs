use std::env;

fn main() {
    let dkp_path = env::var("DEVKITPRO").unwrap();
    let profile = env::var("PROFILE").unwrap();

    println!("cargo:rerun-if-changed=build.rs");
    println!("cargo:rerun-if-env-changed=DEVKITPRO");
    println!("cargo:rustc-link-search=native={dkp_path}/libnds/lib");
    println!(
        "cargo:rustc-link-search=native={dkp_path}/devkitARM/lib/gcc/arm-none-eabi/12.2.0/thumb"
    );

    println!(
        "cargo:rustc-link-lib=static={}",
        match profile.as_str() {
            "debug" => "nds9d",
            _ => "nds9",
        }
    );
    println!(
        "cargo:rustc-link-lib=static={}",
        match profile.as_str() {
            "debug" => "dswifi9d",
            _ => "dswifi9",
        }
    );
    println!("cargo:rustc-link-lib=static=mm9");
}
