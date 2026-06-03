# C++ Basics

These notes are for learning the basics of C++.

All lessons are done on Ubuntu, using the terminal and `micro`.

---

## Table of contents

| Lesson | Topic | Folder |
|---|---|---|
| 01 | Compile and run | [`01_compile_run`](01_compile_run/) |
| 02 | Variables and types | [`02_variables_types`](02_variables_types/) |
| 03 | Conditions and loops | [`03_conditions_loops`](03_conditions_loops/) |
| 04 | Functions | [`04_functions`](04_functions/) |
| 05 | Structs | [`05_structs`](05_structs/) |
| 06 | Vectors and strings | [`06_vectors_strings`](06_vectors_strings/) |
| 07 | Read and write files | [`07_read_write_files`](07_read_write_files/) |
| 08 | Parse text | [`08_parse_text`](08_parse_text/) |
| 09 | Headers | [`09_headers`](09_headers/) |
| 10 | CMake | [`10_cmake`](10_cmake/) |
| 11 | Debugging | [`11_debugging`](11_debugging/) |

---

## Lesson 01: Compile and run

In this lesson, we learn what a C++ source file is, how to compile it with `g++`, and how to run the executable.

For C++, we write a `.cpp` file first, then we compile it. The compiler creates a new file that the computer can run. This new file is called an **executable**.

So the logic is as follows:

```text
C++ source file --> compiler --> executable program
```

### First C++ program

Before writing the first program, we need to understand the basic structure of a C++ code.

A simple C++ program usually has:

```text
libraries
main function
instructions
return statement
```

The first program is:

```cpp
#include <iostream>

int main() {
    std::cout << "C++ is working." << std::endl;
    return 0;
}
```

Now we explain it line by line.

### `#include <iostream>`

```cpp
#include <iostream>
```

This line tells C++ to include the input/output library. We need this because we want to print something to the terminal.

The name `iostream` means:

```text
input/output stream
```

For now, the important point is:

```text
iostream gives us std::cout and std::endl
```

### `int main()`

```cpp
int main() {
```

This is the start of the program. Every normal C++ program starts from `main`. When we run the program, the computer starts reading the instructions inside `main`.

The word `int` means that `main` returns an integer value at the end.

### Curly brackets

```cpp
{
    ...
}
```

The curly brackets show where the body of `main` starts and ends. Everything inside the brackets belongs to the `main` function.

### `std::cout`

```cpp
std::cout << "C++ is working." << std::endl;
```

This line prints text to the terminal. The text we want to print must be inside quotation marks:

```text
"C++ is working."
```

The `<<` operator sends the text into `std::cout`. So this line means:

```text
send this text to the terminal output
```

### `std::endl`

```cpp
std::endl
```

This ends the output line. It is similar to pressing Enter after printing.

### Semicolon

Most C++ statements must end with a semicolon';'. If we forget the semicolon, the compiler will give an error.

### `return 0;`

```cpp
return 0;
```

This means the program finished successfully.

Here:

```text
0 = success
```

So the whole program means:

```text
include the printing library
start the main program
print "C++ is working."
end the program successfully
```

---

### What is a source file?

A **source file** is the file that contains the code we write.

For C++, source files usually end with:

```text
.cpp
```

For example:

```text
main.cpp
```

This file is readable by us, but the computer does not run it directly.

The source file must be compiled first.

---

### Compile the program

To compile the program, we use this structure:

```text
g++ warning-flags C++-version source-file -o output-file
```

For this lesson:

```bash
g++ -Wall -Wextra -std=c++17 cpp/01_compile_run/main.cpp -o build/lesson01
```

This means:

```text
g++                          C++ compiler
-Wall                        show common warnings
-Wextra                      show extra warnings
-std=c++17                   use C++17
cpp/01_compile_run/main.cpp  source file
-o                           name the output file
build/lesson01               executable file
```

So the command means:

```text
Compile main.cpp using C++17 and save the executable as build/lesson01.
```

### Run the program

After compiling, we run the executable:

```bash
./build/lesson01
```

The expected output is:

```text
C++ is working.
```

The `./` means:

```text
run this file from this path
```

---

### Tasks

1. Create this file:

```text
cpp/01_compile_run/main.cpp
```

2. Write a first C++ program that prints:

```text
I am learning C++ for physics projects.
```

3. Compile it from the repo root.

4. Run the executable.

5. Remove one semicolon on purpose.

6. Compile again and read the error.

---

Files:

- [`01_compile_run/main.cpp`](01_compile_run/main.cpp)


---

## Lesson 02: Variables and types

In this lesson, we learn how C++ stores values using variables, and why every variable must have a type.

Files:

- [`02_variables_types/main.cpp`](02_variables_types/main.cpp)

---

## Lesson 03: Conditions and loops

In this lesson, we learn how to make decisions and repeat operations.

Files:

- [`03_conditions_loops/main.cpp`](03_conditions_loops/main.cpp)

---

## Lesson 04: Functions

In this lesson, we learn how to split code into reusable pieces.

Files:

- [`04_functions/main.cpp`](04_functions/main.cpp)

---

## Lesson 05: Structs

In this lesson, we learn how to group related variables into one object.

Files:

- [`05_structs/main.cpp`](05_structs/main.cpp)

---

## Lesson 06: Vectors and strings

In this lesson, we learn how to store many values and work with text.

Files:

- [`06_vectors_strings/main.cpp`](06_vectors_strings/main.cpp)

---

## Lesson 07: Read and write files

In this lesson, we learn how to read input files and write output files.

Files:

- [`07_read_write_files/main.cpp`](07_read_write_files/main.cpp)

---

## Lesson 08: Parse text

In this lesson, we learn how to extract numbers and words from text lines.

Files:

- [`08_parse_text/main.cpp`](08_parse_text/main.cpp)

---

## Lesson 09: Headers

In this lesson, we learn how to split code into header files and source files.

Files:

- [`09_headers/main.cpp`](09_headers/main.cpp)

---

## Lesson 10: CMake

In this lesson, we learn how to build a small C++ project using CMake.

Files:

- [`10_cmake/`](10_cmake/)

---

## Lesson 11: Debugging

In this lesson, we learn how to read compiler errors and fix common mistakes.

Files:

- [`11_debugging/main.cpp`](11_debugging/main.cpp)

---

## Progress tracker

| Lesson | Done? | Notes |
|---|---|---|
| 01 | yes |  |
| 02 | no |  |
| 03 | no |  |
| 04 | no |  |
| 05 | no |  |
| 06 | no |  |
| 07 | no |  |
| 08 | no |  |
| 09 | no |  |
| 10 | no |  |
| 11 | no |  |
