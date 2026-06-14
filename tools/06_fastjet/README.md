# Lesson 06: FastJet

FastJet is used for jet clustering.

It takes final-state particles and reconstructs jets.

This lesson connects to:

- [`HepMC`](../05_hepmc/README.md)
- [`event kinematics`](../../physics_cpp/04_event_kinematics/README.md)
- [`CMake`](../../cpp/10_cmake/README.md)

## Main idea

Input:

```text
final-state particles
```

Output:

```text
jets
```

The common jet algorithm used here is:

```text
anti-kt
```

with radius:

```text
R = 0.4
```

## Files

- [`small_examples/particles.txt`](small_examples/particles.txt)
- [`scripts/check_particles.py`](scripts/check_particles.py)
- [`src/fastjet_example.cc`](src/fastjet_example.cc)

## Quick check

The Python script only checks the small input file.

The C++ file needs FastJet installed.

## GitHub note

Do not commit large particle lists or generated jet outputs.
