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
    --blocklist-type "__builtin_va_list" \
    --blocklist-type "__va_list" \
    --with-derive-default \
    --experimental \
    --wrap-static-fns \
    --wrap-static-fns-path=src/arm9_bindings.c \
    -- \
    -I$DEVKITPRO/libnds/include \
    -isystem$DEVKITARM/arm-none-eabi/include \
    -DARM9 \
    >src/arm9_bindings.rs
cargo fmt --all