cmake_minimum_required(VERSION 3.11)
project(HelloWebassembly VERSION 0.1.0 LANGUAGES CXX)

add_executable(HelloWebassembly)

target_compile_features(HelloWebassembly PRIVATE cxx_auto_type)

target_sources(HelloWebassembly
  PRIVATE
    src/main.cpp
)

install(TARGETS HelloWebassembly
  RUNTIME DESTINATION dist
)

install(DIRECTORY web/ DESTINATION dist)

install(FILES "${CMAKE_CURRENT_BINARY_DIR}/HelloWebassembly.wasm"
  DESTINATION dist
)
