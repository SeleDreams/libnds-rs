#!/usr/bin/env bash

set -euxo pipefail

bindgen "$DEVKITPRO/libnds/include/nds.h" \
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
    --target=thumbv4t-none-eabi \
    --sysroot=$DEVKITARM/arm-none-eabi \
    -isystem$DEVKITARM/arm-none-eabi/include \
    -I$DEVKITPRO/libnds/include \
    -mfloat-abi=soft \
    -march=thumbv4t \
    -mtune=mpcore \
    -mfpu=vfp \
    -DARM7 \
    -D__DS__ \
    >src/arm7_bindings.rs
cargo fmt --all
