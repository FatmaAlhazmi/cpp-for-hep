# Lesson 04: Herwig

Herwig is another event generator.

It can also read LHE files and shower the events.

This lesson connects to:

- [`MG5/MadEvent`](../01_mg5_madevent/README.md)
- [`LHE files`](../02_lhe_files/README.md)
- [`Pythia8`](../03_pythia8/README.md)

## Why compare Herwig and Pythia

Pythia and Herwig use different shower and hadronisation models.

Comparing them gives an early generator-dependence check.

## Placeholder input file

The input card uses placeholders:

```text
@LHE_FILE@
@OUT_FILE@
```

The helper script replaces them with local paths.

## Files

- [`cards/herwig_lhe.in`](cards/herwig_lhe.in)
- [`scripts/render_card.py`](scripts/render_card.py)
- [`scripts/check_herwig_log.py`](scripts/check_herwig_log.py)
- [`small_examples/herwig.log`](small_examples/herwig.log)

Do not commit local rendered cards if they contain machine-specific paths.
