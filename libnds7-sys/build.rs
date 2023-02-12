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
            "debug" => "nds7d",
            _ => "nds7",
        }
    );
    println!(
        "cargo:rustc-link-lib=static={}",
        match profile.as_str() {
            "debug" => "dswifi7d",
            _ => "dswifi7",
        }
    );
    println!("cargo:rustc-link-lib=static=mm7");
    println!("cargo:rerun-if-changed=src/arm7_bindings.c");
    cc::Build::new().file("src/arm7_bindings.c").compiler(format!("{}/devkitARM/bin/arm-none-eabi-gcc",dkp_path)).include(format!("{}/libnds/include",dkp_path)).include(format!("{}/devkitARM/lib/gcc/arm-none-eabi/12.2.0/include",dkp_path)).compile("bindings");

}
