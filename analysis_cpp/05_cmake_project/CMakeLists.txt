cmake_minimum_required(VERSION 3.16)

project(analysis_cpp_lesson05)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(summary_analysis
    main.cpp
    src/analysis.cpp
)

target_include_directories(summary_analysis PRIVATE include)
