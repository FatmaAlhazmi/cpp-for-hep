from pathlib import Path
import sys

path = Path(sys.argv[1]) if len(sys.argv) > 1 else Path("small_examples/herwig.log")

text = path.read_text()

finished = "Herwig run finished" in text
errors_ok = "Errors: 0" in text

print(f"finished = {finished}")
print(f"errors_ok = {errors_ok}")
