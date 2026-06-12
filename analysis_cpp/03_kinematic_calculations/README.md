# Lesson 03: Kinematic calculations

In this lesson, we compute event-level kinematic quantities.

We use:

```text
xg = 2*Egamma/sqrts
pair_m2 = (p1 + p2) dot (p1 + p2)
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
