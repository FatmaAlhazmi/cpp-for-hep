from pathlib import Path
import math

path = Path("small_examples/particles.txt")

n = 0
sum_E = 0.0
sum_px = 0.0
sum_py = 0.0
sum_pz = 0.0

for line in path.read_text().splitlines():
    line = line.strip()

    if not line or line.startswith("#"):
        continue

    px, py, pz, E = map(float, line.split())

    n += 1
    sum_px += px
    sum_py += py
    sum_pz += pz
    sum_E += E

pt = math.sqrt(sum_px*sum_px + sum_py*sum_py)

print(f"particles = {n}")
print(f"sum_E = {sum_E}")
print(f"sum_pt = {pt}")
print(f"sum_pz = {sum_pz}")
