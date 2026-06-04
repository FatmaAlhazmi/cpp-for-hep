# Lesson 06: Vectors and strings

In this lesson, we learn how to store many values using `std::vector`, and how to store text using `std::string`.

So far, we used separate variables like:

```cpp
double rho1 = 5.0;
double rho2 = 50.0;
double rho3 = 99.0;
double rho4 = 100.0;
```

This works, but it is not practical when we have many values.

A `std::vector` stores many values of the same type in one object.

---

## Vector

To use vectors, we include:

```cpp
#include <vector>
```

The general form is:

```text
std::vector<type> name;
```

Example:

```cpp
std::vector<double> rhos;
```

This means:

```text
rhos is a vector that stores double values
```

---

## Adding values

We add values using:

```cpp
push_back
```

Example:

```cpp
rhos.push_back(5.0);
rhos.push_back(50.0);
rhos.push_back(99.0);
rhos.push_back(100.0);
```

Now `rhos` contains four values.

---

## Accessing values

Vector indexing starts from zero.

```cpp
rhos[0]
```

is the first value.

```cpp
rhos[1]
```

is the second value.

So:

```text
rhos[0] = 5.0
rhos[1] = 50.0
rhos[2] = 99.0
rhos[3] = 100.0
```

---

## Looping over a vector

A vector is useful because we can loop over it.

```cpp
for (double rho : rhos) {
    std::cout << rho << std::endl;
}
```

This means:

```text
for each rho inside rhos, print rho
```

This is called a range-based `for` loop.

---

## Program

This program stores several `rho` values in a vector, then counts how many are in the zero region and side region.

```cpp
#include <iostream>
#include <vector>

int main() {
    std::vector<double> rhos;

    rhos.push_back(5.0);
    rhos.push_back(50.0);
    rhos.push_back(99.0);
    rhos.push_back(100.0);

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

---

## Expected output

```text
zero_count = 1
side_count = 2
```

The value `100.0` is not counted in the side region because the side region is:

```text
30 <= rho < 100
```

---

## Vector initialization

There is a shorter way to create a vector with values:

```cpp
std::vector<double> rhos{5.0, 50.0, 99.0, 100.0};
```

This is the same as using `push_back` four times.

So the program can start with:

```cpp
std::vector<double> rhos{5.0, 50.0, 99.0, 100.0};
```

This is shorter and cleaner.

---

## String

A string stores text.

To use strings, we include:

```cpp
#include <string>
```

Example:

```cpp
std::string sample = "mu240";
```

This means:

```text
sample is a string storing the text mu240
```

We can print it:

```cpp
std::cout << "sample = " << sample << std::endl;
```

---

## Program with a string

```cpp
#include <iostream>
#include <string>
#include <vector>

int main() {
    std::string sample = "mu240";
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

    std::cout << "sample = " << sample << std::endl;
    std::cout << "zero_count = " << zero_count << std::endl;
    std::cout << "side_count = " << side_count << std::endl;

    return 0;
}
```

---

## Expected output

```text
sample = mu240
zero_count = 1
side_count = 2
```

---

## Common mistakes

**Mistake 1: forgetting the vector header**

```cpp
#include <vector>
```

is needed for `std::vector`.

**Mistake 2: forgetting the string header**

```cpp
#include <string>
```

is needed for `std::string`.

**Mistake 3: using the wrong type**

```cpp
std::vector<int> rhos{5.0, 50.0};
```

Use `double` for decimal physics values:

```cpp
std::vector<double> rhos{5.0, 50.0};
```

**Mistake 4: wrong indexing**

The first element is:

```cpp
rhos[0]
```

not:

```cpp
rhos[1]
```

---

## Tasks

Write and run the main program, then do this small task:

```text
Add a string called mode with value "visible".
Print sample, mode, zero_count, and side_count.
```

Expected output:

```text
sample = mu240
mode = visible
zero_count = 1
side_count = 2
```

The trick is that `mode` is text, so it must be a `std::string`, not a `double` or `int`.

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

---

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
