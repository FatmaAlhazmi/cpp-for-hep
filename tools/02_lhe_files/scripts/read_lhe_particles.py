from pathlib import Path

path = Path("small_examples/tiny_events.lhe")

lines = path.read_text().splitlines()

inside_event = False
event_id = 0
final_particles = 0

for line in lines:
    line = line.strip()

    if line == "<event>":
        inside_event = True
        event_id += 1
        final_particles = 0
        continue

    if line == "</event>":
        print(f"event {event_id} final_particles = {final_particles}")
        inside_event = False
        continue

    if not inside_event or not line:
        continue

    parts = line.split()

    if len(parts) < 13:
        continue

    try:
        status = int(parts[1])
    except ValueError:
        continue

    if status == 1:
        final_particles += 1
