# Lesson 01: MG5/MadEvent

MG5 generates hard-scattering parton-level events.

MadEvent is the part that integrates the matrix element and produces event samples.

This lesson connects to:

- [`analysis_cpp`](../../analysis_cpp/README.md)
- [`LHE files`](../02_lhe_files/README.md)

## What MG5 does

For a process like:

```text
e+ e- -> mu+ mu- gamma
```

MG5 computes the tree-level matrix element and produces events.

The output is usually an LHE file:

```text
events.lhe.gz
```

## Process card idea

A process card tells MG5:

```text
import model
generate process
output folder
launch
set beam energy
set cuts
set number of events
```

## Example channels

```text
e+ e- -> mu+ mu- gamma
e+ e- -> ta+ ta- gamma
e+ e- -> b b~ gamma
```

## Files

- [`cards/mumu_gamma_240.mg5`](cards/mumu_gamma_240.mg5)
- [`cards/tautau_gamma_240.mg5`](cards/tautau_gamma_240.mg5)
- [`cards/bb_gamma_240.mg5`](cards/bb_gamma_240.mg5)
- [`notes/commands.md`](notes/commands.md)

## What to check after a run

```text
cross section
number of events
LHE file path
run folder
cuts used
beam energy
```

Do not commit large MG5 output folders.
