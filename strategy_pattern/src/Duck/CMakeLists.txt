add_library(Duck
    duck.cc
    )

target_include_directories(Duck PUBLIC
    ${CMAKE_SOURCE_DIR}/include/
    )
