from pathlib import Path

path = Path("small_examples/tiny_hepmc.dat")

event_id = 0
final_particles = 0

for line in path.read_text().splitlines():
    parts = line.split()

    if not parts:
        continue

    if parts[0] == "E":
        if event_id > 0:
            print(f"event {event_id} final_particles = {final_particles}")

        event_id = int(parts[1])
        final_particles = 0

    elif parts[0] == "P":
        status = int(parts[3])

        if status == 1:
            final_particles += 1

if event_id > 0:
    print(f"event {event_id} final_particles = {final_particles}")
