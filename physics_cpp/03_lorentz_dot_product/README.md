# Lesson 03: Lorentz dot product

In this lesson, we compute the Lorentz dot product of two four-vectors.

This uses:

- [`functions`](../../cpp/04_functions/README.md)
- [`structs`](../../cpp/05_structs/README.md)
- [`four-vectors`](../02_four_vectors/README.md)

For:

```text
a = (aE, ax, ay, az)
b = (bE, bx, by, bz)
```

using metric convention:

```text
(+,-,-,-)
```

the Lorentz dot product is:

```text
a dot b = aE*bE - ax*bx - ay*by - az*bz
```

## Program idea

Use the same `FourVector` struct and write:

```text
lorentz_dot
```

which takes two `FourVector` objects.

## Expected example

For:

```text
a = (240, 10, 0, 238)
b = (20, 1, 2, 19)
```

we get:

```text
a dot b = 268
```

because:

```text
240*20 - 10*1 - 0*2 - 238*19 = 268
```

## Relation to mass squared

A four-vector dotted with itself gives:

```text
p dot p = m2
```

So:

```text
lorentz_dot(p, p)
```

should give the same result as:

```text
invariant_mass_squared(p)
```

## Common mistakes

**Mistake 1: using the Euclidean dot product**

Wrong for four-vectors:

```text
aE*bE + ax*bx + ay*by + az*bz
```

Correct:

```text
aE*bE - ax*bx - ay*by - az*bz
```

## Tasks

Write and run the main program, then do this small task:

```text
Compute lorentz_dot(p, p).
```

Use:

```text
p = (240, 10, 0, 238)
```

Expected:

```text
p dot p = 856
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
