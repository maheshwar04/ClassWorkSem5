import sys

a = 10
b = 23.6
c = 'c'
d = "hello"
e = False

print("Size of a (integer):", sys.getsizeof(a))
print("Size of b (float):", sys.getsizeof(b))
print("Size of c (string):", sys.getsizeof(c))
print("Size of d (string):", sys.getsizeof(d))
print("Size of e (boolean):", sys.getsizeof(e))
