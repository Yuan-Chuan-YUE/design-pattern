add_library(Observer
    current_conditions_display.cc
    )

target_include_directories(Observer PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )
