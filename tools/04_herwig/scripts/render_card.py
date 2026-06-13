from pathlib import Path
import sys

if len(sys.argv) != 5:
    print("usage: python3 render_card.py template.in output.in path/to/events.lhe output.run")
    raise SystemExit(1)

template = Path(sys.argv[1])
output = Path(sys.argv[2])
lhe_path = sys.argv[3]
out_file = sys.argv[4]

text = template.read_text()
text = text.replace("@LHE_FILE@", lhe_path)
text = text.replace("@OUT_FILE@", out_file)

output.write_text(text)

print(f"wrote {output}")
