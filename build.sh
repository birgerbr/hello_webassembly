#!/bin/bash

mkdir build
cd build
emconfigure cmake -DCMAKE_INSTALL_PREFIX=../ ..
emmake make -s "BINARYEN_METHOD='native-wasm'"
emmake make install
