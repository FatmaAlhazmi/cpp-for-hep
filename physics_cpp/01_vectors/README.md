# Lesson 01: Vectors

In this lesson, we use C++ to represent a 3-vector.

A 3-vector has three components:

```text
px
py
pz
```

For momentum, we write:

```text
p = (px, py, pz)
```

## Spatial momentum squared

The main quantity is:

```text
p2 = px*px + py*py + pz*pz
```

This means:

```text
|p|^2 = px^2 + py^2 + pz^2
```

## Program idea

Use a `struct`:

```cpp
struct Vector3 {
    double px;
    double py;
    double pz;
};
```

Then write a function:

```text
norm_squared
```

that returns:

```text
px*px + py*py + pz*pz
```

## Expected example

For:

```text
px = 10
py = 0
pz = 238
```

we get:

```text
p2 = 56744
```

## Common mistakes

**Mistake 1: forgetting one component**

A 3-vector needs all three components.

**Mistake 2: using `^` for powers**

In C++, `^` is not power.

Use:

```text
px*px
```

not:

```text
px^2
```

## Tasks

Write and run the main program, then do this small task:

```text
Add a function called dot3.
It should take two Vector3 objects.
It should return:
a.px*b.px + a.py*b.py + a.pz*b.pz
```

Use:

```text
a = (1, 2, 3)
b = (4, 5, 6)
```

Expected:

```text
dot3 = 32
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
