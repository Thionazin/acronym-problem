#!/usr/bin/env python3
from sys import stdin
import sys
import re

integer = "(0|-?[1-9]\d*)"

MAX = 10**15

cases = 0

inputstring = stdin.readline()
inputstring = inputstring.strip()
assert isinstance(inputstring, str)
assert inputstring.isupper()
assert len(inputstring) >= 1
assert len(inputstring) <= 1000

amount = stdin.readline()
amount = amount.strip()
assert re.match(integer, amount)
assert int(amount) >= len(inputstring)
assert int(amount) <= 1e6
assert int(amount) >= 1

while True:
    line = stdin.readline()
    if len(line) == 0 or line == "\n":
        break
    line = line.strip()
    assert line[0].isupper()
    assert len(line) <= 1000
    cases += 1

assert cases == int(amount)

# Nothing to report
sys.exit(42)
