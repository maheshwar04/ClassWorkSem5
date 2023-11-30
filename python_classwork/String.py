s="Hello"
# access the first character
print(s[0]) # returns "H"

# access the last character
print(s[-1]) # returns "o"

# access a substring from index 1 to 3 (excluding 3)
print(s[1:3]) # returns "el"

# access a substring from index 2 to the end
print(s[2:]) # returns "llo"

# access a substring from the beginning to index 4 (excluding 4)
print(s[:4]) # returns "Hell"

# access the whole string
print(s[:]) # returns "Hello"

# access every second character from the beginning to the end
print(s[::2]) # returns "Hlo"

# access every second character from index 1 to 4 (excluding 4)
print(s[1:4:2]) # returns "el"

# access every second character from the end to the beginning
print(s[::-2]) # returns "olH"
