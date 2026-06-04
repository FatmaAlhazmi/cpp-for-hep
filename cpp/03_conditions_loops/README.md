## Lesson 03: Conditions and loops

In this lesson, we learn how to make decisions and repeat operations in C++.

In Lesson 2, we stored values and printed them. Now we want the program to check conditions and repeat a calculation many times.

A condition is a statement that is either true or false.

A loop repeats code while a condition is true, or for a fixed number of steps.

---

### Conditions

The basic form is:

```cpp
if (condition) {
    instructions
}
```

For example:

```cpp
if (rho < 10.0) {
    std::cout << "inside zero region" << std::endl;
}
```

This means:

```text
if rho is smaller than 10, print the message
```

---

### `if`, `else if`, and `else`

Use `if` for the first condition.

Use `else if` for another condition.

Use `else` for everything else.

```cpp
if (rho < 10.0) {
    std::cout << "zero region" << std::endl;
} else if (rho >= 30.0 && rho < 100.0) {
    std::cout << "side region" << std::endl;
} else {
    std::cout << "outside selected regions" << std::endl;
}
```

---

### Comparison operators

| Operator | Meaning |
|---|---|
| `<` | less than |
| `>` | greater than |
| `<=` | less than or equal |
| `>=` | greater than or equal |
| `==` | equal |
| `!=` | not equal |

Important:

```text
=   assignment
==  comparison
```

So this is wrong inside a condition:

```cpp
if (charge = -1) {
}
```

This assigns a value.

This is correct:

```cpp
if (charge == -1) {
}
```

This checks the value.

---

### Logical operators

| Operator | Meaning |
|---|---|
| `&&` | and |
| `||` | or |
| `!` | not |

Example:

```cpp
if (rho >= 30.0 && rho < 100.0) {
    std::cout << "side region" << std::endl;
}
```

This means:

```text
rho must be at least 30
and
rho must be less than 100
```

---

### Program

This program checks where a value of `rho` falls.

```cpp
#include <iostream>

int main() {
    double rho = 8.5;

    if (rho < 10.0) {
        std::cout << "zero region" << std::endl;
    } else if (rho >= 30.0 && rho < 100.0) {
        std::cout << "side region" << std::endl;
    } else {
        std::cout << "outside selected regions" << std::endl;
    }

    return 0;
}
```

---

### Expected output

```text
zero region
```

---

### Loops

A loop repeats code.

The most common loop for now is the `for` loop.

The basic form is:

```cpp
for (initial value; condition; update) {
    instructions
}
```

Example:

```cpp
for (int i = 0; i < 5; i++) {
    std::cout << i << std::endl;
}
```

This prints:

```text
0
1
2
3
4
```

Notice that it stops before `5`.

---

### Counting with a loop

This program counts how many values are in the zero region and side region.

```cpp
#include <iostream>

int main() {
    double rho1 = 8.5;
    double rho2 = 45.0;
    double rho3 = 120.0;

    int zero_count = 0;
    int side_count = 0;

    if (rho1 < 10.0) {
        zero_count = zero_count + 1;
    } else if (rho1 >= 30.0 && rho1 < 100.0) {
        side_count = side_count + 1;
    }

    if (rho2 < 10.0) {
        zero_count = zero_count + 1;
    } else if (rho2 >= 30.0 && rho2 < 100.0) {
        side_count = side_count + 1;
    }

    if (rho3 < 10.0) {
        zero_count = zero_count + 1;
    } else if (rho3 >= 30.0 && rho3 < 100.0) {
        side_count = side_count + 1;
    }

    std::cout << "zero_count = " << zero_count << std::endl;
    std::cout << "side_count = " << side_count << std::endl;

    return 0;
}
```

This works, but it repeats too much code. Later, vectors will make this cleaner.

---

### Shorter update syntax

This:

```cpp
zero_count = zero_count + 1;
```

can be written as:

```cpp
zero_count++;
```

Both mean:

```text
increase zero_count by 1
```

---

### Common mistakes


**Mistake 1: missing braces**

```cpp
if (rho < 10.0)
    std::cout << "zero" << std::endl;
```

This can work for one line, but use braces for clarity.

---

**Mistake 2: wrong loop range**

```cpp
for (int i = 0; i <= 5; i++)
```

This runs 6 times, not 5.

---

### Tasks

Write and run the main program in:

```text
cpp/03_conditions_loops/main.cpp
```

Then do this small task:

```text
Use rho1, rho2, rho3, and rho4.
Count how many are in the zero region.
Count how many are in the side region.
Print both counts.
```

Use these values:

```text
rho1 = 5.0
rho2 = 50.0
rho3 = 99.0
rho4 = 100.0
```

Expected result:

```text
zero_count = 1
side_count = 2
```

The trick is that `rho = 100.0` is **not** in the side region, because the side region is:

```text
30 <= rho < 100
```

Try it first without looking at the solution.

Solution file:

- [`03_conditions_loops/task_solution.cpp`](03_conditions_loops/task_solution.cpp)

---

Files:

- [`03_conditions_loops/main.cpp`](03_conditions_loops/main.cpp)
- [`03_conditions_loops/task_solution.cpp`](03_conditions_loops/task_solution.cpp)
