def sum(n1, n2):
    result=n1+n2
    return result

def name(name):
    print(name)
    
nam=input('Enter your name\n')
name(nam)

num1=int(input("Enter first number\n"))
num2=int(input("Enter second number\n"))

print(f"The sum of two numbers are {sum(num1, num2)}")