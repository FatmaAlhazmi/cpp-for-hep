# Lesson 08: Parse text

In this lesson, we learn how to extract values from a line of text.

In Lesson 7, we read numbers directly from a file. Now we want to read lines that contain both words and numbers.

This is useful because many data files are not just one number per line. They usually have records like:

```text
rho 5.0
rho 50.0
rho 99.0
rho 100.0
```

or later:

```text
particle 13 -1 20.0 1.0 2.0 19.8
```

To parse text lines in C++, we use:

```cpp
std::getline
std::stringstream
```

---

## Headers

For this lesson, we use:

```cpp
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>
```

Meaning:

| Header | Used for |
|---|---|
| `<fstream>` | reading files |
| `<iostream>` | printing |
| `<sstream>` | parsing a line |
| `<string>` | storing text |

---

## Reading a line

In Lesson 7, we read numbers directly:

```cpp
while (input >> rho) {
}
```

Now we read a full line:

```cpp
std::string line;

while (std::getline(input, line)) {
}
```

This means:

```text
read one full line from the file
store it in line
repeat until the file ends
```

---

## Parsing a line

Suppose one line is:

```text
rho 50.0
```

This line has:

```text
word   number
rho    50.0
```

We can parse it using:

```cpp
std::stringstream ss(line);
```

Then extract values:

```cpp
std::string label;
double rho;

ss >> label >> rho;
```

So:

```text
label = "rho"
rho   = 50.0
```

---

## Program

Assume the input file is:

```text
data/small_examples/rhos_labeled.txt
```

with this content:

```text
rho 5.0
rho 50.0
rho 99.0
rho 100.0
```

The program reads each line, parses the label and value, then counts the zero and side regions.

```cpp
#include <fstream>
#include <iostream>
#include <sstream>
#include <string>

int main() {
    std::ifstream input("data/small_examples/rhos_labeled.txt");

    if (!input) {
        std::cout << "Could not open input file" << std::endl;
        return 1;
    }

    std::string line;
    int zero_count = 0;
    int side_count = 0;

    while (std::getline(input, line)) {
        std::stringstream ss(line);

        std::string label;
        double rho = 0.0;

        ss >> label >> rho;

        if (label == "rho") {
            if (rho < 10.0) {
                zero_count++;
            } else if (rho >= 30.0 && rho < 100.0) {
                side_count++;
            }
        }
    }

    std::cout << "zero_count = " << zero_count << std::endl;
    std::cout << "side_count = " << side_count << std::endl;

    return 0;
}
```

---

## Expected output

```text
zero_count = 1
side_count = 2
```

The value `100.0` is not counted in the side region.

---

## Why use `std::stringstream`?

A line is first read as text:

```text
rho 50.0
```

But we want to separate it into parts:

```text
label = rho
rho = 50.0
```

`std::stringstream` lets us treat a string like an input stream.

So this:

```cpp
ss >> label >> rho;
```

extracts the first part into `label` and the second part into `rho`.

---

## Skipping other labels

If the file has extra lines:

```text
rho 5.0
comment test
rho 50.0
```

we only want lines where:

```text
label == "rho"
```

That is why the program uses:

```cpp
if (label == "rho") {
}
```

---

## Common mistakes

**Mistake 1: forgetting `<sstream>`**

```cpp
#include <sstream>
```

is needed for `std::stringstream`.

**Mistake 2: using `input >> rho` when the line has text**

This fails if the file line starts with a word like:

```text
rho 50.0
```

Use `std::getline` and `std::stringstream`.

**Mistake 3: not checking the label**

If the file contains different line types, check the label before using the value.

**Mistake 4: wrong order of variables**

For a line:

```text
rho 50.0
```

the correct extraction is:

```cpp
ss >> label >> rho;
```

not:

```cpp
ss >> rho >> label;
```

---

## Tasks

Create this input file:

```text
data/small_examples/rhos_labeled.txt
```

with these values:

```text
rho 5.0
rho 50.0
rho 99.0
rho 100.0
```

Write and run the main program, then do this small task:

```text
Add one extra line that starts with skip.
The program should ignore it.
```

Use this input:

```text
rho 5.0
skip 1.0
rho 50.0
rho 99.0
rho 100.0
```

Expected result:

```text
zero_count = 1
side_count = 2
```

The trick is that the line starting with `skip` should not affect the counts.

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

---

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
- [`../../data/small_examples/rhos_labeled.txt`](../../data/small_examples/rhos_labeled.txt)
