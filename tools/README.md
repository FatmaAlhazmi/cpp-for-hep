# Tools Notes

These notes connect the C++ and analysis lessons to the external HEP tools.

## Table of contents

| Lesson | Topic | Notes |
|---|---|---|
| 01 | MG5/MadEvent | [`01_mg5_madevent/README.md`](01_mg5_madevent/README.md) |
| 02 | LHE files | [`02_lhe_files/README.md`](02_lhe_files/README.md) |
| 03 | Pythia8 | [`03_pythia8/README.md`](03_pythia8/README.md) |
| 04 | Herwig | [`04_herwig/README.md`](04_herwig/README.md) |
| 05 | HepMC | [`05_hepmc/README.md`](05_hepmc/README.md) |
| 06 | FastJet | [`06_fastjet/README.md`](06_fastjet/README.md) |
| 07 | LHAPDF | [`07_lhapdf/README.md`](07_lhapdf/README.md) |
| 08 | Linking external libraries | [`08_linking_external_libraries/README.md`](08_linking_external_libraries/README.md) |

## Goal

The goal is to understand the tool chain used before and after C++ analysis code:

```text
MG5/MadEvent
LHE files
Pythia8
Herwig
HepMC
FastJet
LHAPDF
external library linking
```

## Basic workflow

```text
MG5/MadEvent -> LHE -> Pythia8/Herwig -> HepMC -> FastJet -> analysis code
```


