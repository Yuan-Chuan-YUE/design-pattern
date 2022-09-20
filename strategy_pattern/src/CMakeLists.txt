add_subdirectory(Duck)
add_executable(StrategyPattern
    main.cc
    )
target_link_libraries(StrategyPattern PUBLIC
    Duck
    )
target_include_directories(StrategyPattern PUBLIC
    ${PROJECT_BINARY_DIR}/include/Version
    )
