add_executable(FactoryPattern
    main.cc
    )

target_link_libraries(FactoryPattern PUBLIC
    Pizza
    PizzaStore
    )

target_include_directories(FactoryPattern PUBLIC
    ${CMAKE_SOURCE_DIR}/include
    )
