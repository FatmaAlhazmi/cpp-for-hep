# cpp-for-hep

A small repo for learning C++ for high energy physics analysis.

The plan is to start with basic C++, then move to physics calculations, event files, CMake, and common tools used in particle physics.

## Contents

- `cpp/` basic C++ lessons
- `physics_cpp/` vectors, four-vectors, and dot products
- `analysis_cpp/` event reading, selection, calculations, and tables
- `tools/` notes and examples for MG5/MadEvent, Pythia, Herwig, HepMC, FastJet, and LHAPDF
- `data/` small input examples
- `outputs/` small example outputs
- `notes/` short notes

## Requirements

On Ubuntu:

```bash
sudo apt update
sudo apt install git build-essential g++ cmake make
```

Check:

```bash
git --version
g++ --version
cmake --version
```

## How to use

Clone the repo:

```bash
git clone https://github.com/YOUR_USERNAME/cpp-for-hep.git
cd cpp-for-hep
```

Create a build folder:

```bash
mkdir -p build
```

Compile the first example:

```bash
g++ -Wall -Wextra -std=c++17 cpp/01_compile_run/main.cpp -o build/lesson01
```

Run it:

```bash
./build/lesson01
```

Expected output:

```text
C++ is working.
```

## Study order

1. `cpp/`
2. `physics_cpp/`
3. `analysis_cpp/`
4. `tools/`
