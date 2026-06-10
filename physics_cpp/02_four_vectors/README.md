# Lesson 02: Four-vectors

In this lesson, we represent a four-vector in C++.

A four-vector has one energy component and three momentum components:

```text
p = (E, px, py, pz)
```

In code, we use:

```cpp
struct FourVector {
    double energy;
    double px;
    double py;
    double pz;
};
```

## Spatial part

The spatial momentum squared is:

```text
p2 = px*px + py*py + pz*pz
```

## Invariant mass squared

With metric convention:

```text
(+,-,-,-)
```

the invariant mass squared is:

```text
m2 = E*E - px*px - py*py - pz*pz
```

## Program idea

Write two functions:

```text
momentum_squared
invariant_mass_squared
```

For:

```text
E  = 240
px = 10
py = 0
pz = 238
```

we get:

```text
p2 = 56744
m2 = 856
```

## Common mistakes

**Mistake 1: using plus signs for all components**

Wrong:

```text
E*E + px*px + py*py + pz*pz
```

Correct:

```text
E*E - px*px - py*py - pz*pz
```

**Mistake 2: confusing p2 and m2**

```text
p2 = spatial momentum squared
m2 = invariant mass squared
```

## Tasks

Write and run the main program, then do this small task:

```text
Add a function called energy_squared.
It should return E*E.
Print E2, p2, and m2.
```

Expected:

```text
E2 = 57600
p2 = 56744
m2 = 856
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
