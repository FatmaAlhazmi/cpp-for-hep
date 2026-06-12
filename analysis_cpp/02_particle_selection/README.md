# Lesson 02: Particle selection

In this lesson, we select particles from an event.

Selections:

```text
charged: charge != 0
muon: pid == 13 or pid == -13
```

## Expected output

```text
events = 2
charged_particles = 4
muons = 4
photons = 2
```

## Task

Count only negatively charged particles.

Expected:

```text
negative_particles = 2
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
- [`small_examples/events.txt`](small_examples/events.txt)
