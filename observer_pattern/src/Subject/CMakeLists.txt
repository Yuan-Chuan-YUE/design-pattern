add_library(Subject
    weather_data.cc
    )

target_include_directories(Subject PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )
