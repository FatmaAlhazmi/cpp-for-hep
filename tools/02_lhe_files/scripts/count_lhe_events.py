from pathlib import Path

path = Path("small_examples/tiny_events.lhe")

text = path.read_text()
events = text.count("<event>")

print(f"events = {events}")
