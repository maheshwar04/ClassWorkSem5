import sys
import calendar

print(sys.version)
print(calendar.month(2023, 9))
print(calendar.isleap(2023))

num=23.56
print(abs(num))

num=4
print(bin(num))

i=67
print(chr(i))

# id() returns the identity of an object, which is a unique integer
x = 10
y = "Hello"
print(id(x)) # 140735800656176
print(id(y)) # 2239376003440

# len() returns the length of an object, which is the number of items or characters it contains
a = [1, 2, 3, 4, 5]
b = "Python"
print(len(a)) # 5
print(len(b)) # 6

# max() returns the largest item in an iterable or the largest of two or more arguments
c = [10, 20, 30, 40, 50]
d = "banana"
print(max(c)) # 50
print(max(d)) # n
print(max(100, 200, 300)) # 300

# min() returns the smallest item in an iterable or the smallest of two or more arguments
e = [10, 20, 30, 40, 50]
f = "banana"
print(min(e)) # 10
print(min(f)) # a
print(min(100, 200, 300)) # 100

# pow() returns the value of x raised to the power of y, or x to the power of y modulo z if z is given
g = 2
h = 3
i = 5
print(pow(g, h)) # 8
print(pow(g, h, i)) # 3 (g^h)%i

# ord() returns the Unicode code point of a single character
j = "A"
k = "a"
l = "!"
print(ord(j)) # 65
print(ord(k)) # 97
print(ord(l)) # 33