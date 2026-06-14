# Lesson 08: Linking external libraries

This lesson shows how C++ code connects to libraries.

This connects to:

- [`headers`](../../cpp/09_headers/README.md)
- [`CMake`](../../cpp/10_cmake/README.md)
- [`FastJet`](../06_fastjet/README.md)
- [`LHAPDF`](../07_lhapdf/README.md)

## Main idea

A library usually needs:

```text
header path
library path
library name
```

In command-line compilation, tools like these help:

```text
fastjet-config
lhapdf-config
```

In CMake, we usually use:

```text
target_include_directories
target_link_libraries
```

## Files

- [`CMakeLists.txt`](CMakeLists.txt)
- [`main.cpp`](main.cpp)
- [`include/simple_math.hpp`](include/simple_math.hpp)
- [`src/simple_math.cpp`](src/simple_math.cpp)
- [`notes/external_commands.md`](notes/external_commands.md)

## Expected output

```text
answer = 5
```

## Why start with a local library

Before linking FastJet or LHAPDF, it is better to understand the local version:

```text
header + source file + executable
```

Then external linking becomes less confusing.
