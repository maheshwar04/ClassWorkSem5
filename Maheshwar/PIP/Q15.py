def sort_three_integers():
    num1 = int(input("Enter the first integer: "))
    num2 = int(input("Enter the second integer: "))
    num3 = int(input("Enter the third integer: "))

    smallest = min(num1, num2, num3)
    largest = max(num1, num2, num3)
    middle = num1 + num2 + num3 - smallest - largest

    print("Sorted order:", smallest, middle, largest)


sort_three_integers()

