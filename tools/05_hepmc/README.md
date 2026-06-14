# Lesson 05: HepMC

HepMC is an event-record format.

It is commonly used after showering with Pythia8 or Herwig.

This lesson connects to:

- [`Pythia8`](../03_pythia8/README.md)
- [`Herwig`](../04_herwig/README.md)
- [`event reader`](../../analysis_cpp/01_event_reader/README.md)

## What HepMC stores

A HepMC event stores:

```text
event number
particles
vertices
momenta
particle ids
status codes
```

For a first analysis, focus on:

```text
pid
status
px
py
pz
E
```

## Final-state particles

For simple analysis, start with final-state particles:

```text
status = 1
```

## Files

- [`small_examples/tiny_hepmc.dat`](small_examples/tiny_hepmc.dat)
- [`scripts/count_hepmc_events.py`](scripts/count_hepmc_events.py)
- [`scripts/read_final_particles.py`](scripts/read_final_particles.py)

## Expected output

```text
events = 2
```

```text
event 1 final_particles = 3
event 2 final_particles = 3
```

## GitHub note

Real HepMC files can be large.

Keep only tiny test files in the repo.
