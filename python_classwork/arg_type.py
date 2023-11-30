# Required Arguments
def add_numbers(a, b):
    return a + b

result = add_numbers(3, 4)
print("Sum of 3 and 4:", result)

# Keyword Arguments
def greet(name, greeting):
    return f"{greeting}, {name}!"

greeting_message = greet(name="Sriya", greeting="Hello")
print(greeting_message)

# Default Arguments
def power(base, exponent=2):
    return base ** exponent

result_default = power(3)
print("3 squared:", result_default)

result_custom_exponent = power(2, 3)
print("2 cubed:", result_custom_exponent)

# Variable-Length Arguments
def print_args(*args, **kwargs):
    print("Positional Arguments:", args)
    print("Keyword Arguments:", kwargs)

print_args(1, 2, 3, name="Akash", age=25)

def average (*args): 
    total = 0 
    count = 0 
    for num in args: 
        total += num 
        count += 1 
        return total / count
    
print (average (1, 2, 3)) # This will print 2.0, as (1 + 2 + 3) / 3 = 2.0 
print (average (4, 5, 6, 7)) # This will print 5.5, as (4 + 5 + 6 + 7) / 4 = 5.5 
print (average ()) # This will raise an error, as we cannot divide by zero

def area(**kwargs): #shape radius
    shape = kwargs.get("shape")
    if shape == "circle":
        radius = kwargs.get("radius")
        return 3.14 * radius ** 2
    elif shape == "square":
        side = kwargs.get("side")
        return side ** 2
    elif shape == "rectangle":
        length = kwargs.get("length")
        width = kwargs.get("width")
        return length * width
    else:
        return "Invalid shape"

print(area(shape="circle", radius=5)) # prints 78.5
print(area(shape="square", side=4)) # prints 16
print(area(shape="rectangle", length=3, width=2)) # prints 6
print(area(shape="triangle", base=4, height=3)) # prints Invalid shape

        

