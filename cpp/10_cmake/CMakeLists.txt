cmake_minimum_required(VERSION 3.16)

project(lesson10_cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson10
    main.cpp
    four_vector.cpp
)
