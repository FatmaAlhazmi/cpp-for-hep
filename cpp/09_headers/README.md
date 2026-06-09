# Lesson 11: Debugging

In this lesson, we learn how to read compiler errors and fix common C++ mistakes.

Debugging means finding the mistake, understanding why it happened, and fixing it without randomly changing the code.

In C++, many errors appear during compilation, before the program runs.

A compiler error usually tells us:

```text
file name
line number
error message
```

The first error is usually the most important one. Fix it first, then compile again.

## How to read an error

Read the error in this order:

```text
1. Which file?
2. Which line?
3. What is the first error?
```

Do not start from the last error. Later errors can be caused by the first one.

## Example 1: missing semicolon

```cpp
double energy = 240.0
std::cout << energy << std::endl;
```

The first line is missing:

```text
;
```

Correct:

```cpp
double energy = 240.0;
std::cout << energy << std::endl;
```

## Example 2: misspelled type

```cpp
douple energy = 240.0;
```

C++ does not know `douple`.

Correct:

```cpp
double energy = 240.0;
```

## Example 3: misspelled variable name

```cpp
double energy = 240.0;
std::cout << energry << std::endl;
```

C++ treats `energy` and `energry` as different names.

Correct:

```cpp
double energy = 240.0;
std::cout << energy << std::endl;
```

## Example 4: using a variable before defining it

```cpp
double p2 = px*px + py*py + pz*pz;

double px = 10.0;
double py = 0.0;
double pz = 238.0;
```

C++ reads from top to bottom.

Correct idea:

```text
define px, py, pz first
then compute p2
```

## Example 5: missing header

If we use:

```cpp
std::vector<double> rhos;
```

we need:

```cpp
#include <vector>
```

Common headers:

| Tool | Header |
|---|---|
| `std::cout` | `<iostream>` |
| `std::vector` | `<vector>` |
| `std::string` | `<string>` |
| `std::ifstream`, `std::ofstream` | `<fstream>` |
| `std::stringstream` | `<sstream>` |

## Example 6: no `main`

This error:

```text
undefined reference to `main'
```

means the file being compiled does not contain a valid:

```cpp
int main()
```

Common causes:

```text
the file is empty
the code was written in the wrong file
only a helper file was compiled
main was misspelled
```

## Example 7: undefined reference

This usually happens when we split code into more than one `.cpp` file.

Example:

```text
undefined reference to `momentum_squared(FourVector)'
```

This often means:

```text
the function was declared
but the .cpp file containing its definition was not compiled
```

If the function is defined in:

```text
four_vector.cpp
```

then that file must be included in the build.

## Example 8: wrong file path

This error:

```text
No such file or directory
```

usually means the path is wrong.

Example:

```bash
g++ cpp/07_read_write_files/main.cpp -o build/lesson07
```

works from the repo root:

```text
cpp-for-hep/
```

but not from inside:

```text
cpp/07_read_write_files/
```

The path depends on the folder where the command is run.

## Debugging method

Use this method:

```text
compile
read the first error
fix one thing
compile again
repeat
```

Do not fix ten things at once.

## Useful terminal checks

Check where you are:

```bash
pwd
```

List files:

```bash
ls
```

Print a file:

```bash
cat main.cpp
```

Find `main`:

```bash
grep -n "int main" main.cpp
```

Check Git state:

```bash
git status --short
```

## Program

This program is correct. It is used as the clean reference.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<double> rhos{5.0, 50.0, 99.0, 100.0};

    int zero_count = 0;
    int side_count = 0;

    for (double rho : rhos) {
        if (rho < 10.0) {
            zero_count++;
        } else if (rho >= 30.0 && rho < 100.0) {
            side_count++;
        }
    }

    std::cout << "zero_count = " << zero_count << std::endl;
    std::cout << "side_count = " << side_count << std::endl;

    return 0;
}
```

## Expected output

```text
zero_count = 1
side_count = 2
```

## Common mistakes

**Mistake 1: fixing the last error first**

Start with the first compiler error.

**Mistake 2: changing too many things at once**

Fix one thing, then compile again.

**Mistake 3: ignoring the folder path**

Know where you are before compiling or opening files.

**Mistake 4: committing broken code**

Run the program before committing.

## Tasks

Write and run the main program, then do this small task:

```text
Create a broken file called broken.cpp.
Add three mistakes:
1. misspell double
2. remove one semicolon
3. remove #include <vector>
```

Try to fix the errors one by one.

The trick is to fix only the first compiler error, then compile again.

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`broken.cpp`](broken.cpp)
- [`task_solution.cpp`](task_solution.cpp)
