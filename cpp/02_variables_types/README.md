## Lesson 02: Variables and types

In this lesson, we learn how C++ stores values using variables, and why every variable must have a type.

In Lesson 1, we only printed fixed text. Now we want the program to store numbers, print them, and do simple calculations.

Every variable has a **type**. The type tells C++ what kind of value the variable stores.

The general form is:

```text
type name = value;
```

For example:

```cpp
double energy = 240.0;
int charge = -1;
```

---

### Main types

| Type | Meaning | When to use |
|---|---|---|
| `int` | whole number | counts, labels, integer charges |
| `double` | decimal number | physics numbers like energy and momentum |
| `bool` | true or false | yes/no checks |
| `char` | one character | one-letter labels |
| `std::string` | text | names, file paths, sample labels |

We focus on:

```text
int
double
```

---

### Declaration and assignment

Declaration means creating a variable.

```cpp
double energy;
```

Assignment means giving it a value.

```cpp
energy = 240.0;
```

Usually, we do both together:

```cpp
double energy = 240.0;
```

---

### Program

This program stores a few numbers, prints them, and computes simple quantities.

```cpp
#include <iostream>

int main() {
    double energy = 240.0;
    double px = 10.0;
    double py = 0.0;
    double pz = 238.0;
    int charge = -1;

    double p2 = px*px + py*py + pz*pz;

    const double sqrts = 240.0;
    double s = sqrts*sqrts;

    std::cout << "energy = " << energy << std::endl;
    std::cout << "px = " << px << std::endl;
    std::cout << "py = " << py << std::endl;
    std::cout << "pz = " << pz << std::endl;
    std::cout << "charge = " << charge << std::endl;
    std::cout << "p2 = " << p2 << std::endl;
    std::cout << "s = " << s << std::endl;

    return 0;
}
```

---

### Printing variables

In Lesson 1, we printed text:

```cpp
std::cout << "C++ is working." << std::endl;
```

Now we print text and a variable:

```cpp
std::cout << "energy = " << energy << std::endl;
```

The `<<` operator can be repeated in the same output line.

---

### Arithmetic

C++ uses the usual arithmetic symbols:

```text
+   addition
-   subtraction
*   multiplication
/   division
```

This line:

```cpp
double p2 = px*px + py*py + pz*pz;
```

computes:

```text
p2 = px^2 + py^2 + pz^2
```

---

### Constants

A constant is a variable that should not change.

```cpp
const double sqrts = 240.0;
```

This means:

```text
sqrts is fixed
```

If we try to change it later, the compiler gives an error.

Use `const` for values that are fixed during the program.

---


### Expected output

```text
energy = 240
px = 10
py = 0
pz = 238
charge = -1
p2 = 56744
s = 57600
```

It is normal that `240.0` prints as `240`.

---

### Common mistakes

**Mistake 1: forgetting the type**

```cpp
energy = 240.0;
```

The first time we create a variable, we must write its type.

---

**Mistake 2: using a variable before defining it**

```cpp
double p2 = px*px + py*py + pz*pz;
double px = 10.0;
```

C++ reads from top to bottom.

---

**Mistake 3: changing a constant**

```cpp
const double sqrts = 240.0;
sqrts = 365.0;
```

This gives an error because `sqrts` is constant.

---

### Tasks

Write and run the main program, and then do this small task:

```text
Compute m2 = energy*energy - p2
print m2
```

The trick is that `m2` must be computed **after** `energy` and `p2` have already been defined.

Try it first without looking at the solution.

Solution file:

- [`02_variables_types/task_solution.cpp`](02_variables_types/task_solution.cpp)

---

Files:

- [`02_variables_types/main.cpp`](02_variables_types/main.cpp)
- [`02_variables_types/task_solution.cpp`](02_variables_types/task_solution.cpp)
