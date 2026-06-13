# Lesson 02: LHE files

LHE means Les Houches Event file.

It is a text event format commonly used between matrix-element generators and shower generators.

This lesson connects to:

- [`MG5/MadEvent`](../01_mg5_madevent/README.md)
- [`read/write files`](../../cpp/07_read_write_files/README.md)
- [`parse text`](../../cpp/08_parse_text/README.md)
- [`event reader`](../../analysis_cpp/01_event_reader/README.md)

## What an LHE file stores

Each event contains particles with columns like:

```text
pid status mother1 mother2 color1 color2 px py pz E m lifetime spin
```

For basic analysis, start with:

```text
pid
status
px
py
pz
E
m
```

## Particle status

Usually:

```text
status = -1   incoming beam particle
status = 1    final-state particle
```

## Files

- [`small_examples/tiny_events.lhe`](small_examples/tiny_events.lhe)
- [`scripts/count_lhe_events.py`](scripts/count_lhe_events.py)
- [`scripts/read_lhe_particles.py`](scripts/read_lhe_particles.py)

## Expected script outputs

```text
events = 2
```

```text
event 1 final_particles = 3
event 2 final_particles = 3
```

Real LHE files are usually large. Commit only tiny test files.
