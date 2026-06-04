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

