# Lesson 04: Event kinematics

In this lesson, we use simple event-level quantities.

This uses:

- [`structs`](../../cpp/05_structs/README.md)
- [`functions`](../../cpp/04_functions/README.md)
- [`vectors and strings`](../../cpp/06_vectors_strings/README.md)
- [`Lorentz dot product`](../03_lorentz_dot_product/README.md)

An event contains particles. Each particle has a four-vector and usually other information such as charge or id.

For now:

```cpp
struct Particle {
    int pid;
    double charge;
    FourVector p;
};
```

## Photon energy fraction

For a photon with energy `Egamma`, and centre-of-mass energy `sqrts`:

```text
xg = 2*Egamma/sqrts
```

This is a dimensionless energy fraction.

## Pair invariant mass

If two particles have four-vectors `p1` and `p2`, their total four-vector is:

```text
P = p1 + p2
```

Component by component:

```text
P.E  = p1.E  + p2.E
P.px = p1.px + p2.px
P.py = p1.py + p2.py
P.pz = p1.pz + p2.pz
```

Then:

```text
M2 = P dot P
```

## Program idea

Write:

```text
add_four_vectors
lorentz_dot
mass_squared
photon_x
```

## Common mistakes

**Mistake 1: adding only energies**

A total four-vector needs all components added.

**Mistake 2: mixing sqrts and s**

```text
sqrts = centre-of-mass energy
s = sqrts*sqrts
```

## Tasks

Write and run the main program, then do this small task:

```text
Use sqrts = 240 and photon energy = 20.
Compute xg = 2*Egamma/sqrts.
Then add two four-vectors and compute the total mass squared.
```

Use:

```text
p1 = (100, 10, 0, 90)
p2 = (80, -5, 0, -70)
```

Expected:

```text
xg = 0.166667
P = (180, 5, 0, 20)
M2 = 31975
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
