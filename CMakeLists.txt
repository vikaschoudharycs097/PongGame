cmake_minimum_required(Version 3.10)

project(pong)

set(CMAKE_CXX_FLAGS "-std=c++17 -Wall -Werror -Wpedantic")
set(source_dir "${PROJECT_SOURCE_DIR}/src/")

file(GLOB source_files "${source_dir}/*.cpp")

add_executable(pong ${source_files})