## Lesson 04: Functions

In this lesson, we learn how to write functions in C++.

So far, all the code has been inside `main`. This works for small programs, but it becomes messy when the same calculation is used more than once.

A function is a named block of code that does one specific job.

The general form is:

```text
return_type function_name(input variables) {
    instructions
    return result;
}
```

For example:

```cpp
double square(double x) {
    return x*x;
}
```

This function takes a number `x` and returns `x*x`.

---

### Why functions are useful

Without a function, repeated calculations make the code longer and easier to break.

For example:

```cpp
double p2 = px*px + py*py + pz*pz;
```

This is fine once. But if we need to compute it many times, it is better to make a function.

---

### Return type

The return type tells C++ what kind of value the function gives back.

Example:

```cpp
double square(double x)
```

Here:

```text
double  -> return type
square  -> function name
x       -> input variable
```

So this function returns a `double`.

If a function does not return anything, we use:

```cpp
void
```

For now, we focus on functions that return a value.

---

### Function input

Inputs go inside the parentheses.

```cpp
double square(double x)
```

This means:

```text
the function takes one double called x
```

A function can take more than one input:

```cpp
double momentum_squared(double px, double py, double pz)
```

This function takes three doubles.

---

### `return`

The `return` statement gives the result back.

```cpp
return x*x;
```

For a function with return type `double`, the returned value should be a number.

---

### Program

This program defines two functions and then uses them inside `main`.

```cpp
#include <iostream>

double square(double x) {
    return x*x;
}

double momentum_squared(double px, double py, double pz) {
    return square(px) + square(py) + square(pz);
}

int main() {
    double energy = 240.0;
    double px = 10.0;
    double py = 0.0;
    double pz = 238.0;

    double p2 = momentum_squared(px, py, pz);
    double m2 = square(energy) - p2;

    std::cout << "p2 = " << p2 << std::endl;
    std::cout << "m2 = " << m2 << std::endl;

    return 0;
}
```

---

### Function order

In this program, `square` appears before `momentum_squared`.

That matters because `momentum_squared` uses `square`.

C++ must know about a function before it is used.

So this order works:

```text
square
momentum_squared
main
```

This order would not work yet:

```text
momentum_squared
square
main
```

Later, headers and function declarations will fix this.

---

### Reading the program

The program starts from `main`, not from the first function in the file.

The functions above `main` are only definitions. They are used when `main` calls them.

This line:

```cpp
double p2 = momentum_squared(px, py, pz);
```

means:

```text
send px, py, and pz to the function
compute px^2 + py^2 + pz^2
store the returned value in p2
```

This line:

```cpp
double m2 = square(energy) - p2;
```

means:

```text
compute energy^2
subtract p2
store the result in m2
```

---

### Expected output

```text
p2 = 56744
m2 = 856
```

---

### Common mistakes

**Mistake 1: forgetting the return type**

```cpp
square(double x) {
    return x*x;
}
```

C++ needs the return type:

```cpp
double square(double x) {
    return x*x;
}
```

---

**Mistake 2: forgetting `return`**

```cpp
double square(double x) {
    x*x;
}
```

The function computes nothing useful because it does not return the value.

---

**Mistake 3: using a function before C++ knows it**

```cpp
double p2 = momentum_squared(px, py, pz);
```

This only works if `momentum_squared` has already been defined or declared before `main`.

---

**Mistake 4: mixing variable names**

The names inside the function do not need to match the names inside `main`.

For example:

```cpp
double square(double x)
```

can be called using:

```cpp
square(energy)
```

Here, `energy` is passed into the function and is used as `x` inside the function.

---

### Tasks

Write and run the main program in:

```text
cpp/04_functions/main.cpp
```

Then do this small task:

```text
Write a function called invariant_mass_squared.
It should take energy, px, py, and pz.
It should return energy*energy - px*px - py*py - pz*pz.
Print the result.
```

Expected result:

```text
m2 = 856
```

The trick is to avoid recomputing `p2` separately inside `main`. The function should do the full calculation.

Try it first without looking at the solution.

Solution file:

- [`04_functions/task_solution.cpp`](04_functions/task_solution.cpp)

---

Files:

- [`04_functions/main.cpp`](04_functions/main.cpp)
- [`04_functions/task_solution.cpp`](04_functions/task_solution.cpp)
