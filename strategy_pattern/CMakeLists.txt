cmake_minimum_required(VERSION 3.10)

project(StrategyPattern VERSION 1.0)


#configure_file(version.h.in version.h)

set(CMAKE_CXX_STANDARD 11)
set(CMAKE_CXX_STANDARD_REQUIRED True)

set(CMAKE_RUNTIME_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/bin)
set(CMAKE_ARCHIVE_OUTPUT_DIRECTORY ${CMAKE_CURRENT_BINARY_DIR}/lib)

message(STATUS "PROJECT_BINARY_DIR: ${PROJECT_BINARY_DIR}")
message(STATUS "CMAKE_CURRENT_SOURCE_DIR: ${CMAKE_CURRENT_SOURCE_DIR}")

add_subdirectory(src)

configure_file(
    ${CMAKE_CURRENT_SOURCE_DIR}/include/Version/version.h.in
    ${CMAKE_CURRENT_BINARY_DIR}/include/Version/version.h
    )

message(STATUS "PROJECT_BINARY_DIRL: ${PROJECT_BINARY_DIR}")
message(STATUS "EXTRA_LIBRARIES: ${EXTRA_LIBRARIES}")
