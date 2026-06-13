from pathlib import Path
import sys

if len(sys.argv) != 4:
    print("usage: python3 render_card.py template.cmnd output.cmnd path/to/events.lhe")
    raise SystemExit(1)

template = Path(sys.argv[1])
output = Path(sys.argv[2])
lhe_path = sys.argv[3]

text = template.read_text()
text = text.replace("@LHE_FILE@", lhe_path)

output.write_text(text)

print(f"wrote {output}")
