add_library(Beverage
    beverage.cc
    espresso.cc
    )

target_include_directories(Beverage PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )
