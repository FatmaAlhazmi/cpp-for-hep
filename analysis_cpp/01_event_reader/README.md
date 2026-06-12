# Lesson 01: Event reader

In this lesson, we read a simple event file.

Input format:

```text
event id
particle pid charge E px py pz
photon pid charge E px py pz
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
