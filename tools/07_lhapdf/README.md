# Lesson 07: LHAPDF

LHAPDF provides parton distribution functions.

This lesson connects to:

- [`MG5/MadEvent`](../01_mg5_madevent/README.md)
- [`CMake`](../../cpp/10_cmake/README.md)
- [`linking external libraries`](../08_linking_external_libraries/README.md)

## What PDFs mean

A PDF tells us how likely it is to find a parton inside a proton with momentum fraction:

```text
x
```

at a scale:

```text
Q
```

For pure e+e- examples, PDFs are usually not central.

For proton-proton calculations, they are essential.

## Files

- [`scripts/check_pdf_set.py`](scripts/check_pdf_set.py)
- [`src/lhapdf_example.cc`](src/lhapdf_example.cc)

## PDF set used in the example

```text
CT14lo
```

If this set is not installed, either install it or change the set name in the code.

## GitHub note

Do not commit downloaded PDF grids.
