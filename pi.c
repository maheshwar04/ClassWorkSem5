#include <stdio.h>

double calculate_pi(int terms) {

    double pi_approximation = 0;

    int sign = 1;

    for (int i = 0; i < terms; i++) {

        double denominator = 2 * i + 1;

        pi_approximation += sign / denominator;

        sign = -sign; 

    }

    pi_approximation *= 4;

    return pi_approximation;

}

int main() {

    int terms = 99; 
    double approximated_pi = calculate_pi(terms);

    printf("Approximated value of π using %d terms: %f\n", terms, approximated_pi);

    return 0;

}


