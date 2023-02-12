#!/usr/bin/env bash

set -euxo pipefail

bindgen "wrapper.h" \
    --rust-target nightly \
    --use-core \
    --distrust-clang-mangling \
    --no-layout-tests \
    --ctypes-prefix "::libc" \
    --no-prepend-enum-name \
    --generate "functions,types,vars" \
    --blacklist-type "u(8|16|32|64)" \
    --blacklist-type "__builtin_va_list" \
    --blacklist-type "__va_list" \
    --with-derive-default \
    -- \
    --target=armv5te-none-eabi \
    --sysroot=$DEVKITARM/arm-none-eabi \
    -isystem$DEVKITARM/arm-none-eabi/include \
    -I$DEVKITPRO/libnds/include \
    -mfloat-abi=soft \
    -march=armv5te \
    -mtune=mpcore \
    -mfpu=vfp \
    -DARM9 \
    -D__DS__ \
    >src/arm9_bindings.rs
cargo fmt --all
