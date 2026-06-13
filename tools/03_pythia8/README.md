# Lesson 03: Pythia8

Pythia8 is used for showering, hadronisation, and decays.

In this workflow, MG5 produces an LHE file, then Pythia8 reads it.

This lesson connects to:

- [`MG5/MadEvent`](../01_mg5_madevent/README.md)
- [`LHE files`](../02_lhe_files/README.md)

## What Pythia8 can add

```text
initial-state radiation
final-state radiation
parton shower
hadronisation
decays
```

## Placeholder card

The card uses:

```text
Beams:LHEF = @LHE_FILE@
```

The helper script replaces `@LHE_FILE@` with a real local path.

## Files

- [`cards/pythia_lhe.cmnd`](cards/pythia_lhe.cmnd)
- [`scripts/render_card.py`](scripts/render_card.py)
- [`scripts/check_pythia_log.py`](scripts/check_pythia_log.py)
- [`small_examples/pythia.log`](small_examples/pythia.log)

## Helper command

```bash
python3 scripts/render_card.py cards/pythia_lhe.cmnd local_pythia.cmnd /path/to/events.lhe
```

Do not commit local rendered cards if they contain machine-specific paths.
