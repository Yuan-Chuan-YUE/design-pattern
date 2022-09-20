cmake_minimum_required(VERSION 3.10)
set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED)

project(ObserverPattern VERSION 1.0)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

add_subdirectory(src)
add_subdirectory(tools)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Version/version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/include/Version/version.h
    )
