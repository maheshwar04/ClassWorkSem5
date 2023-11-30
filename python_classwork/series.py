import math
def printSeries(x, n):
    result=0
    for i in range(n+1):
        term=((-1)**i)*(x**(2*i))/math.factorial(2*i)
        result+=term
        print(f"Term {i+1}: {term}, Sum up to term{i+1}: {result}")
        
x=1
n=5
printSeries(x, n)