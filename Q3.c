#include <stdio.h>
#include <math.h>
#include <stdbool.h>

struct sci_not_t {
    double mantissa;
    int exponent;
};

struct sci_not_t scan_sei(const char* input) {
    struct sci_not_t result;
    sscanf(input, "%lf%le%d", &result.mantissa, &result.mantissa, &result.exponent);
    return result;
}

void print_sci(struct sci_not_t num) {
    printf("%.5lfe%d\n", num.mantissa, num.exponent);
}

void normalize_mantissa(struct sci_not_t* num) {
    while (num->mantissa >= 1.0) {
        num->mantissa /= 10.0;
        num->exponent += 1;
    }
    while (num->mantissa < 0.1) {
        num->mantissa *= 10.0;
        num->exponent -= 1;
    }
}

struct sci_not_t sum(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa * pow(10, a.exponent - b.exponent) + b.mantissa;
    result.exponent = b.exponent;
    normalize_mantissa(&result);
    return result;
}

struct sci_not_t difference(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa * pow(10, a.exponent - b.exponent) - b.mantissa;
    result.exponent = b.exponent;
    normalize_mantissa(&result);
    return result;
}

struct sci_not_t product(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa * b.mantissa;
    result.exponent = a.exponent + b.exponent;
    normalize_mantissa(&result);
    return result;
}

struct sci_not_t quotient(struct sci_not_t a, struct sci_not_t b) {
    struct sci_not_t result;
    result.mantissa = a.mantissa / b.mantissa;
    result.exponent = a.exponent - b.exponent;
    normalize_mantissa(&result);
    return result;
}

int main() {
    const char* input1 = "0.25000e3";
    const char* input2 = "0.20000e1";

    struct sci_not_t num1 = scan_sei(input1);
    struct sci_not_t num2 = scan_sei(input2);

    printf("Values input: %s, %s\n", input1, input2);
    
    struct sci_not_t sum_result = sum(num1, num2);
    struct sci_not_t diff_result = difference(num1, num2);
    struct sci_not_t prod_result = product(num1, num2);
    struct sci_not_t quo_result = quotient(num1, num2);

    printf("Sum: ");
    print_sci(sum_result);

    printf("Difference: ");
    print_sci(diff_result);

    printf("Product: ");
    print_sci(prod_result);

    printf("Quotient: ");
    print_sci(quo_result);

    return 0;
}

