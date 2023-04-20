use std::env;


fn main() {
    let target_os = env::var("CARGO_CFG_TARGET_OS").unwrap_or_else(|_| {
        println!("cargo:error=You must provide a target OS; either nintendo_ds_arm9 or nintendo_ds_arm7 is supported.");
        "error".to_string()
    });
    match target_os.as_str() {
        "nintendo_ds_arm9" => arm9_main(),
        "nintendo_ds_arm7" => arm7_main(),
        "error" => {},
        _ => {
            println!("cargo:error=Target OS is not valid! please use the appropriate nintendo DS target json included with this library!")
        }
    }
}

fn arm7_main() {
    let dkp_path = env::var("DEVKITPRO").unwrap_or(String::from("/opt/devkitpro"));
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
    cc::Build::new()
        .file("src/arm7_bindings.c")
        .compiler(format!("{}/devkitARM/bin/arm-none-eabi-gcc", dkp_path))
        .include(format!("{}/libnds/include", dkp_path))
        .include(format!(
            "{}/devkitARM/lib/gcc/arm-none-eabi/12.2.0/include",
            dkp_path
        ))
        .no_default_flags(true)
        .define("ARM7", "1")
        .flag(&format!("-include{}/wrapper.h",env::current_dir().unwrap().display()))
        .flag("-g")
        .flag("-Wall")
        .flag("-O3")
        .flag("-mcpu=arm7tdmi")
        .flag("-mtune=arm7tdmi")
        .flag("-fomit-frame-pointer")
        .flag("-ffast-math")
        .compile("bindings");
}

fn arm9_main() {
    let dkp_path = env::var("DEVKITPRO").unwrap_or(String::from("/opt/devkitpro"));
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
    println!("cargo:rerun-if-changed=src/arm9_bindings.c");
    let exists = std::path::Path::new("src/arm9_bindings.c").exists();
    if exists {
    cc::Build::new()
        .file("src/arm9_bindings.c")
        .compiler(format!("{}/devkitARM/bin/arm-none-eabi-gcc", dkp_path))
        .include(format!("{}/libnds/include", dkp_path))
        .include(format!(
            "{}/devkitARM/lib/gcc/arm-none-eabi/12.2.0/include",
            dkp_path
        ))
        .no_default_flags(true)
        .define("ARM9", "1")
        .flag(&format!("-include{}/wrapper.h",env::current_dir().unwrap().display()))
        .flag("-g")
        .flag("-Wall")
        .flag("-O3")
        .flag("-mcpu=arm946e-s")
        .flag("-mtune=arm946e-s")
        .flag("-fomit-frame-pointer")
        .flag("-ffast-math")
        .compile("bindings");
    }
}
