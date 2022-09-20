add_library(CondimentDecorator
    condiment_decorator.cc
    mocha.cc
    )

target_include_directories(CondimentDecorator PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )
