# External linking command notes

FastJet compile pattern:

```bash
g++ file.cc $(fastjet-config --cxxflags --libs) -o program
```

LHAPDF compile pattern:

```bash
g++ file.cc $(lhapdf-config --cflags --libs) -o program
```

CMake idea:

```text
find headers
find libraries
connect them to the executable
```

Local library idea:

```text
add_library(...)
target_include_directories(...)
target_link_libraries(...)
```
