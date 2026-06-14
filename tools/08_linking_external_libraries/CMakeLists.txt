cmake_minimum_required(VERSION 3.16)

project(linking_external_libraries)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_library(simple_math
    src/simple_math.cpp
)

target_include_directories(simple_math PUBLIC include)

add_executable(linking_example
    main.cpp
)

target_link_libraries(linking_example PRIVATE simple_math)
