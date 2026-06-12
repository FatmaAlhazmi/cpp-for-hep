# Lesson 03: Kinematic calculations

In this lesson, we compute simple event-level kinematic quantities.

This uses:

- [`four-vectors`](../../physics_cpp/02_four_vectors/README.md)
- [`Lorentz dot product`](../../physics_cpp/03_lorentz_dot_product/README.md)
- [`event kinematics`](../../physics_cpp/04_event_kinematics/README.md)
- [`event reader`](../01_event_reader/README.md)

## Quantities

Photon energy fraction:

```text
xg = 2*Egamma/sqrts
```

Pair invariant mass squared:

```text
pair_m2 = (p1 + p2) dot (p1 + p2)
```

## Program idea

For each event:

```text
read particles
find photon
add first two particle four-vectors
compute xg
compute pair_m2
print event result
```

## Expected output

```text
event 1 xg = 0.416667 pair_m2 = 406
event 2 xg = 0.208333 pair_m2 = 5374
```

## Task

Also compute:

```text
photon_pt2 = photon.px*photon.px + photon.py*photon.py
```

Expected:

```text
photon_pt2 = 0
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
- [`small_examples/events.txt`](small_examples/events.txt)
