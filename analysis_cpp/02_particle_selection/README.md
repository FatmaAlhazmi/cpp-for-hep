# Lesson 02: Particle selection

In this lesson, we select particles from an event.

This uses:

- [`conditions and loops`](../../cpp/03_conditions_loops/README.md)
- [`functions`](../../cpp/04_functions/README.md)
- [`structs`](../../cpp/05_structs/README.md)
- [`event reader`](../01_event_reader/README.md)

## Selection rules

Charged particle:

```text
charge != 0
```

Muon:

```text
pid == 13 or pid == -13
```

Photon:

```text
photon line exists
```

## Program idea

Use small functions:

```text
is_charged
is_muon
```

Then loop over the particles in the event.

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
