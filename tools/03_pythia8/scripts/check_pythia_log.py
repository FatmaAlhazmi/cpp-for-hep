from pathlib import Path
import sys

path = Path(sys.argv[1]) if len(sys.argv) > 1 else Path("small_examples/pythia.log")

text = path.read_text()

has_end = "End PYTHIA" in text
errors_ok = "Number of errors: 0" in text

print(f"has_end = {has_end}")
print(f"errors_ok = {errors_ok}")
