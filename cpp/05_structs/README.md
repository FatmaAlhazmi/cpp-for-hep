## Lesson 05: Structs

In this lesson, we learn how to group related variables using a `struct`.

So far, we stored values separately:

```cpp
double energy = 240.0;
double px = 10.0;
double py = 0.0;
double pz = 238.0;
```

This works, but these four values belong together. They describe one four-vector.

A `struct` lets us put related variables under one name.

---

### General form

```text
struct Name {
    type member1;
    type member2;
    type member3;
};
```

For example:

```cpp
struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};
```

Here, `FourVector` is a new type.

It contains four members:

```text
energy
px
py
pz
```

Do not forget the semicolon after the closing brace.

---

### Creating a struct object

After defining the struct, we can create an object:

```cpp
FourVector p;
```

Then we assign values using the dot operator:

```cpp
p.energy = 240.0;
p.px = 10.0;
p.py = 0.0;
p.pz = 238.0;
```

The dot means:

```text
go inside this object and access this member
```

So:

```cpp
p.energy
```

means:

```text
the energy member of p
```

---

### Program

This program defines a four-vector struct and computes its momentum squared.

```cpp
#include <iostream>

struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};

double momentum_squared(FourVector p) {
    return p.px*p.px + p.py*p.py + p.pz*p.pz;
}

int main() {
    FourVector p;

    p.energy = 240.0;
    p.px = 10.0;
    p.py = 0.0;
    p.pz = 238.0;

    double p2 = momentum_squared(p);

    std::cout << "energy = " << p.energy << std::endl;
    std::cout << "px = " << p.px << std::endl;
    std::cout << "py = " << p.py << std::endl;
    std::cout << "pz = " << p.pz << std::endl;
    std::cout << "p2 = " << p2 << std::endl;

    return 0;
}
```

---

### Reading the program

This part defines a new type:

```cpp
struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};
```

This part creates one four-vector object:

```cpp
FourVector p;
```

This part fills the object:

```cpp
p.energy = 240.0;
p.px = 10.0;
p.py = 0.0;
p.pz = 238.0;
```

This part sends the whole object to a function:

```cpp
double p2 = momentum_squared(p);
```

The function receives the object and uses its members:

```cpp
return p.px*p.px + p.py*p.py + p.pz*p.pz;
```

---

### Expected output

```text
energy = 240
px = 10
py = 0
pz = 238
p2 = 56744
```

---

### Struct initialization

There is a shorter way to create and fill a struct:

```cpp
FourVector p{240.0, 10.0, 0.0, 238.0};
```

The values are assigned in the same order as the members in the struct:

```text
energy
px
py
pz
```

So this:

```cpp
FourVector p{240.0, 10.0, 0.0, 238.0};
```

means:

```text
energy = 240.0
px = 10.0
py = 0.0
pz = 238.0
```

This is shorter, but it depends on the order of the members.

---

### Common mistakes

**Mistake 1: forgetting the semicolon after the struct**

Wrong:

```cpp
struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
}
```

Correct:

```cpp
struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};
```

---

**Mistake 2: using a member without the object name**

Wrong:

```cpp
std::cout << energy << std::endl;
```

Correct:

```cpp
std::cout << p.energy << std::endl;
```

The member belongs to the object `p`.

---

**Mistake 3: wrong order in short initialization**

```cpp
FourVector p{10.0, 0.0, 238.0, 240.0};
```

This compiles, but the values go into the wrong members.

Use clear order, or assign with the dot operator when learning.

---

### Tasks

Write and run the main program in:

```text
cpp/05_structs/main.cpp
```

Then do this small task:

```text
Add a function called invariant_mass_squared.
It should take one FourVector.
It should return energy*energy - px*px - py*py - pz*pz.
Print the result.
```

Expected result:

```text
m2 = 856
```

The trick is to access the struct members inside the function using the dot operator.

Try it first without looking at the solution.

Solution file:

- [`05_structs/task_solution.cpp`](05_structs/task_solution.cpp)

---

Files:

- [`05_structs/main.cpp`](05_structs/main.cpp)
- [`05_structs/task_solution.cpp`](05_structs/task_solution.cpp)
