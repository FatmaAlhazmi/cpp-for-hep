# Lesson 10: CMake

In this lesson, we learn how to build a small C++ project using CMake.

So far, we compiled files directly with `g++`. This works for small examples, but it becomes annoying when the project has several source files.

CMake helps us describe the project once, then build it in a clean way.

The main file is:

```text
CMakeLists.txt
```

---

## Why CMake?

With one file, this is fine:

```bash
g++ -Wall -Wextra -std=c++17 main.cpp -o program
```

But with more files, the command becomes longer:

```bash
g++ -Wall -Wextra -std=c++17 main.cpp four_vector.cpp -o program
```

Later, with libraries like FastJet or HepMC, the command becomes even longer.

CMake keeps this organized.

---

## Basic idea

CMake does not directly compile the code.

The logic is:

```text
CMakeLists.txt --> cmake configures the build --> cmake builds the executable
```

We usually build inside a `build/` folder.

So the workflow is:

```text
write CMakeLists.txt
configure the project
build the executable
run the executable
```

---

## Project files

For this lesson, we use:

```text
cpp/10_cmake/
```

with these files:

```text
main.cpp
four_vector.hpp
four_vector.cpp
CMakeLists.txt
```

This is similar to Lesson 9, but now CMake handles the build.

---

## `CMakeLists.txt`

A minimal CMake file looks like this:

```cmake
cmake_minimum_required(VERSION 3.16)

project(lesson10_cmake)

set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)

add_executable(lesson10
    main.cpp
    four_vector.cpp
)
```

---

## Line by line

### Minimum CMake version

```cmake
cmake_minimum_required(VERSION 3.16)
```

This tells CMake the minimum version needed.

---

### Project name

```cmake
project(lesson10_cmake)
```

This names the project.

The name can be simple. It does not have to match the executable name.

---

### C++ standard

```cmake
set(CMAKE_CXX_STANDARD 17)
set(CMAKE_CXX_STANDARD_REQUIRED ON)
```

This tells CMake to use C++17.

This replaces writing:

```bash
-std=c++17
```

manually every time.

---

### Executable

```cmake
add_executable(lesson10
    main.cpp
    four_vector.cpp
)
```

This tells CMake:

```text
create an executable called lesson10
using main.cpp and four_vector.cpp
```

The header file is not usually listed here because it is included by the `.cpp` files.

---

## `four_vector.hpp`

```cpp
#pragma once

struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};

double momentum_squared(FourVector p);
double invariant_mass_squared(FourVector p);
```

This file contains declarations.

---

## `four_vector.cpp`

```cpp
#include "four_vector.hpp"

double momentum_squared(FourVector p) {
    return p.px*p.px + p.py*p.py + p.pz*p.pz;
}

double invariant_mass_squared(FourVector p) {
    return p.energy*p.energy - p.px*p.px - p.py*p.py - p.pz*p.pz;
}
```

This file contains definitions.

---

## `main.cpp`

```cpp
#include <iostream>
#include "four_vector.hpp"

int main() {
    FourVector p{240.0, 10.0, 0.0, 238.0};

    double p2 = momentum_squared(p);
    double m2 = invariant_mass_squared(p);

    std::cout << "p2 = " << p2 << std::endl;
    std::cout << "m2 = " << m2 << std::endl;

    return 0;
}
```

---

## Configure and build

From the lesson folder:

```bash
cmake -S . -B build
cmake --build build
```

Meaning:

```text
-S .       source folder is the current folder
-B build   put build files inside build/
```

Then the executable is:

```text
build/lesson10
```

Run it:

```bash
./build/lesson10
```

---

## Expected output

```text
p2 = 56744
m2 = 856
```

---

## Out-of-source build

We use a build folder so generated files do not mix with source files.

Good:

```text
cpp/10_cmake/main.cpp
cpp/10_cmake/CMakeLists.txt
cpp/10_cmake/build/
```

Bad:

```text
generated CMake files mixed everywhere with source files
```

The `build/` folder is generated and should not be committed.

---

## Common mistakes

**Mistake 1: forgetting one source file**

If `four_vector.cpp` is missing from `add_executable`, the program may fail with an undefined reference error.

```cmake
add_executable(lesson10
    main.cpp
)
```

Wrong, because the function definitions are in `four_vector.cpp`.

---

**Mistake 2: wrong file name**

CMake file names must match the actual files.

If the file is called:

```text
four_vector.cpp
```

then do not write:

```text
four_vectors.cpp
```

---

**Mistake 3: running CMake from the wrong folder**

For this lesson, run CMake from:

```text
cpp/10_cmake/
```

because that folder contains `CMakeLists.txt`.

---

**Mistake 4: committing the build folder**

Do not commit:

```text
build/
```

It is generated.

---

## Tasks

Write and run the CMake version of the Lesson 9 code.

Then do this small task:

```text
Add a function called dot.
It should take two FourVector objects.
It should return:
a.energy*b.energy - a.px*b.px - a.py*b.py - a.pz*b.pz
```

Use:

```text
a = {240.0, 10.0, 0.0, 238.0}
b = {20.0, 1.0, 2.0, 19.0}
```

Expected value:

```text
dot = 268
```

The trick is that after adding the function declaration and definition, CMake does not need a new source file if you keep everything in the same existing files.

Solution files:

- [`task_solution_main.cpp`](task_solution_main.cpp)
- [`task_solution_four_vector.hpp`](task_solution_four_vector.hpp)
- [`task_solution_four_vector.cpp`](task_solution_four_vector.cpp)
- [`task_solution_CMakeLists.txt`](task_solution_CMakeLists.txt)

---

## Files

- [`main.cpp`](main.cpp)
- [`four_vector.hpp`](four_vector.hpp)
- [`four_vector.cpp`](four_vector.cpp)
- [`CMakeLists.txt`](CMakeLists.txt)
- [`task_solution_main.cpp`](task_solution_main.cpp)
- [`task_solution_four_vector.hpp`](task_solution_four_vector.hpp)
- [`task_solution_four_vector.cpp`](task_solution_four_vector.cpp)
- [`task_solution_CMakeLists.txt`](task_solution_CMakeLists.txt)
