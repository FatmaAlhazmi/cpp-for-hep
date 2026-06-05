# Lesson 07: Read and write files

In this lesson, we learn how to read from a text file and write results to another file.

So far, the numbers were written directly inside the C++ program. This is not enough for analysis work, because real programs usually read input data from files and write output tables.

For this lesson, all input and output files stay inside the lesson folder:

```text
cpp/07_read_write_files/
```

The folder structure is:

```text
07_read_write_files/
├── README.md
├── main.cpp
├── task_solution.cpp
├── small_examples/
│   └── rhos.txt
└── outputs/
    └── examples/
        └── rho_counts.txt
```

C++ uses file streams for this:

```text
std::ifstream   read from a file
std::ofstream   write to a file
```

## Headers

To use files, include:

```cpp
#include <fstream>
```

We also use:

```cpp
#include <iostream>
```

for printing messages to the terminal.

## Reading a file

The basic idea is:

```text
open file
check it opened
read values
```

Example:

```cpp
std::ifstream input("small_examples/rhos.txt");
```

This opens a file for reading.

The name `ifstream` means:

```text
input file stream
```

## Checking the file

Always check that the file opened correctly:

```cpp
if (!input) {
    std::cout << "Could not open input file" << "\n";
    return 1;
}
```

Here:

```text
!input
```

means the file did not open correctly.

`return 1` means the program ended with an error.

## Reading numbers

If the file contains numbers, we can read them using:

```cpp
while (input >> rho) {
    ...
}
```

This means:

```text
while the file can still give me a number, store it in rho and run the loop body
```

This is useful when we do not know how many numbers are in the file.

## Input file

Create:

```text
small_examples/rhos.txt
```

with this content:

```text
5.0
50.0
99.0
100.0
```

## Program

The program reads the values and counts the zero and side regions.

```cpp
#include <fstream>
#include <iostream>

int main() {
    std::ifstream input("small_examples/rhos.txt");

    if (!input) {
        std::cout << "Could not open input file" << "\n";
        return 1;
    }

    double rho = 0;
    int zero_count = 0;
    int side_count = 0;

    while (input >> rho) {
        if (rho < 10) {
            zero_count++;
        } else if (rho >= 30 && rho < 100) {
            side_count++;
        }
    }

    std::cout << "zero_count = " << zero_count << "\n";
    std::cout << "side_count = " << side_count << "\n";

    return 0;
}
```

## Expected output

```text
zero_count = 1
side_count = 2
```

The value `100.0` is not counted in the side region.

## Writing to a file

To write to a file, use:

```cpp
std::ofstream output("outputs/examples/rho_counts.txt");
```

The name `ofstream` means:

```text
output file stream
```

Then write to the file the same way we write to `std::cout`:

```cpp
output << "zero_count = " << zero_count << "\n";
```

## Program with output file

This version reads the input file and writes the result to:

```text
outputs/examples/rho_counts.txt
```

```cpp
#include <fstream>
#include <iostream>

int main() {
    std::ifstream input("small_examples/rhos.txt");

    if (!input) {
        std::cout << "Could not open input file" << "\n";
        return 1;
    }

    double rho = 0;
    int zero_count = 0;
    int side_count = 0;
    int total_count = 0;

    while (input >> rho) {
        total_count++;

        if (rho < 10) {
            zero_count++;
        } else if (rho >= 30 && rho < 100) {
            side_count++;
        }
    }

    std::ofstream output("outputs/examples/rho_counts.txt");

    if (!output) {
        std::cout << "Could not open output file" << "\n";
        return 1;
    }

    output << "total_count = " << total_count << "\n";
    output << "zero_count = " << zero_count << "\n";
    output << "side_count = " << side_count << "\n";

    return 0;
}
```

## Expected output file

```text
total_count = 4
zero_count = 1
side_count = 2
```

The terminal may show nothing. That is fine, because the result is written to the output file.

## Important path rule

This lesson uses paths like:

```text
small_examples/rhos.txt
outputs/examples/rho_counts.txt
```

So run the program from inside:

```text
cpp/07_read_write_files/
```

If you run it from the repo root, these paths will not point to the same files.

## Common mistakes

**Mistake 1: forgetting `<fstream>`**

```cpp
#include <fstream>
```

is needed for `std::ifstream` and `std::ofstream`.

**Mistake 2: wrong folder**

If the code uses:

```text
small_examples/rhos.txt
```

then run the executable from:

```text
cpp/07_read_write_files/
```

**Mistake 3: not checking the file**

If the file path is wrong and we do not check it, the program may silently do nothing.

**Mistake 4: forgetting to create the output folder**

Before writing to:

```text
outputs/examples/rho_counts.txt
```

the folder must exist:

```text
outputs/examples/
```

## Tasks

Write and run the main program, then do this small task:

```text
Write the total number of values read.
Write total_count, zero_count, and side_count to an output file.
```

Expected output file:

```text
total_count = 4
zero_count = 1
side_count = 2
```

The trick is that `total_count` must increase once for every number successfully read from the input file.

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
- [`small_examples/rhos.txt`](small_examples/rhos.txt)
- [`outputs/examples/rho_counts.txt`](outputs/examples/rho_counts.txt)
