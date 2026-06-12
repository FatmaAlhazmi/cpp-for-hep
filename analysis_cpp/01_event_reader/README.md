# Lesson 01: Event reader

In this lesson, we read a simple event file.

This uses:

- [`read and write files`](../../cpp/07_read_write_files/README.md)
- [`parse text`](../../cpp/08_parse_text/README.md)
- [`vectors and strings`](../../cpp/06_vectors_strings/README.md)
- [`structs`](../../cpp/05_structs/README.md)

The input file has lines like:

```text
event 1
particle 13 -1 20.0 1.0 2.0 19.8
photon 22 0 50.0 0.0 0.0 50.0
end
```

## Main idea

Read one tag at a time:

```text
event
particle
photon
end
```

Then fill an `Event`.

## Data structures

We use:

```text
FourVector
Particle
Event
```

The `Event` contains:

```text
event id
particles
photon
has_photon
```

## Expected output

```text
events = 2
particles = 4
photons = 2
```

## Task

Add a counter for events without a photon.

Expected:

```text
missing_photon = 0
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
- [`small_examples/events.txt`](small_examples/events.txt)
