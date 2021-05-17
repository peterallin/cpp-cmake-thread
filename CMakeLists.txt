cmake_minimum_required(VERSION 3.16)
project(ThreadTest)

find_package(Threads REQUIRED)

add_executable(my-thread-test)
target_sources(my-thread-test
    PRIVATE
        main.cpp
)
target_link_libraries(my-thread-test PRIVATE Threads::Threads)