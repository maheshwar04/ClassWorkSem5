#include <stdio.h>
#include <math.h>

void printFirstTenNaturalNumbers(int n) {
    if (n <= 10) {
        printf("%d ", n);
        printFirstTenNaturalNumbers(n + 1);
    }
}

void fibonacci(int n, int a, int b) {
    if (n > 0) {
        printf("%d ", a);
        fibonacci(n - 1, b, a + b);
    }
}

int factorial(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

void decimalToBinary(int n) {
    if (n > 0) {
        decimalToBinary(n / 2);
        printf("%d", n % 2);
    }
}

int isPrime(int n, int i) {
    if (i == 1) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return isPrime(n, i - 1);
}

int main() {
    int n;

    printf("First ten natural numbers: ");
    printFirstTenNaturalNumbers(1);
    printf("\n");

    printf("Enter the number of terms for Fibonacci series: ");
    scanf("%d", &n);
    printf("Fibonacci Series:\n");
    fibonacci(n, 0, 1);
    printf("\n");

    printf("Enter the number to find its factorial: ");
    scanf("%d", &n);
    printf("Factorial of %d is %d\n", n, factorial(n));

    printf("Enter a decimal number to convert into binary: ");
    scanf("%d", &n);
    printf("The binary equivalent of %d is ", n);
    decimalToBinary(n);
    printf("\n");

    printf("Enter a number to check if it is prime or not: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is not Prime", n);
    } else if (isPrime(n, n / 2)) {
        printf("%d is Prime\n", n);
    } else {
        printf("%d is not Prime", n);
    }

    return 0;
}

