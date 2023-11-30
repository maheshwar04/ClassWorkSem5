my_string = "My name is Akash Dev and I study in ITER SOA University."

# Slicing to get a substring
substring = my_string[7:12]
print("Substring:", substring)

# Omitting the start index
substring_start_omitted = my_string[:5]
print("Substring (start omitted):", substring_start_omitted)

# Omitting the end index
substring_end_omitted = my_string[7:]
print("Substring (end omitted):", substring_end_omitted)

# Using negative indices (counting from the end of the string)
substring_negative_indices = my_string[-6:-1]
print("Substring (negative indices):", substring_negative_indices)

# Slicing with a step
substring_with_step = my_string[::2]
print("Substring with step 2:", substring_with_step)

# Reversing a string
reversed_string = my_string[::-1]
print("Reversed String:", reversed_string)