# Lesson 04: Summary tables

In this lesson, we read event values and write a summary table.

This uses:

- [`read and write files`](../../cpp/07_read_write_files/README.md)
- [`conditions and loops`](../../cpp/03_conditions_loops/README.md)
- [`parse text`](../../cpp/08_parse_text/README.md)

The input file has one `rho` value per line.

## Region counts

Zero region:

```text
rho < 10
```

Side region:

```text
30 <= rho < 100
```

Ratio:

```text
Rzero = zero/side
```

## Output file

The program writes:

```text
outputs/summary.txt
```

Expected:

```text
sample events zero side Rzero
toy 4 1 2 0.5
```

## Task

Also write the number of events outside both regions.

Expected:

```text
outside = 1
```

Solution file:

- [`task_solution.cpp`](task_solution.cpp)

## Files

- [`main.cpp`](main.cpp)
- [`task_solution.cpp`](task_solution.cpp)
- [`small_examples/rhos.txt`](small_examples/rhos.txt)
- [`outputs/summary.txt`](outputs/summary.txt)
