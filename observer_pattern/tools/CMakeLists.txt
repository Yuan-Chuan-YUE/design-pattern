add_executable(ObserverPattern
    main.cc
    )

target_link_libraries(ObserverPattern
    Subject
    Observer
    )
