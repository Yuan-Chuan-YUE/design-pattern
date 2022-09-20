add_executable(DecoratorPattern
    main.cc
    )

target_link_libraries(DecoratorPattern PUBLIC
    Beverage
    CondimentDecorator
    )

target_include_directories(DecoratorPattern PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )
