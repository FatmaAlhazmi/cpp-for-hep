# Lesson 05: CMake project

In this lesson, we organize the summary-table code as a small CMake project.

This uses:

- [`headers`](../../cpp/09_headers/README.md)
- [`CMake`](../../cpp/10_cmake/README.md)
- [`summary tables`](../04_summary_tables/README.md)

## Project structure

```text
include/
src/
main.cpp
CMakeLists.txt
```

## Main idea

Put declarations in:

```text
include/analysis.hpp
```

Put function definitions in:

```text
src/analysis.cpp
```

Keep the main program short:

```text
main.cpp
```

Use CMake to build the executable.

## Expected output file

```text
sample events zero side Rzero
toy 4 1 2 0.5
```

## Task

Use the task solution to add an outside count.

Solution files:

```text
task_solution_main.cpp
src/task_solution_analysis.cpp
include/task_solution_analysis.hpp
task_solution_CMakeLists.txt
```

## Files

- [`main.cpp`](main.cpp)
- [`CMakeLists.txt`](CMakeLists.txt)
- [`include/analysis.hpp`](include/analysis.hpp)
- [`src/analysis.cpp`](src/analysis.cpp)
- [`task_solution_main.cpp`](task_solution_main.cpp)
- [`task_solution_CMakeLists.txt`](task_solution_CMakeLists.txt)
