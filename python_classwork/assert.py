def is_even(number):
    # check if the number is an integer
    assert isinstance(number, int), "The number must be an integer"
    # check if the number is even
    assert number % 2 == 0, "The number must be even"
    # return True if both conditions are satisfied
    return True

# test the function with some valid and invalid inputs
print(is_even(4)) # prints True
print(is_even(5)) # raises AssertionError: The number must be even
print(is_even(3.14)) # raises AssertionError: The number must be an integer
