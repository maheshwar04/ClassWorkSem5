import sys
print(sys.version)
print(sys.argv)

from sys import version, argv
print(version)
print(argv)

import sys as s
from sys import version as v
print(v)
print(s.argv)