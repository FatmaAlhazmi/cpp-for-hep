import subprocess
import sys

pdf = sys.argv[1] if len(sys.argv) > 1 else "CT14lo"

try:
    result = subprocess.run(
        ["lhapdf", "list"],
        check=True,
        capture_output=True,
        text=True,
    )
except FileNotFoundError:
    print("lhapdf command not found")
    raise SystemExit(1)

found = pdf in result.stdout

print(f"pdf = {pdf}")
print(f"found = {found}")
