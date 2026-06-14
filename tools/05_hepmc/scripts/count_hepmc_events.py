from pathlib import Path

path = Path("small_examples/tiny_hepmc.dat")

events = 0

for line in path.read_text().splitlines():
    parts = line.split()

    if parts and parts[0] == "E":
        events += 1

print(f"events = {events}")
