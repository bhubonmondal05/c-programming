#include <stdio.h>

typedef struct {
    float real;
    float imag;
} complex;

complex add(complex c1, complex c2) {
    complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

complex subtract(complex c1, complex c2) {
    complex diff;
    diff.real = c1.real - c2.real;
    diff.imag = c1.imag - c2.imag;
    return diff;
}

int main() {
    complex c1, c2, result;

    printf("Enter real and imaginary parts of the first complex number: ");
    scanf("%f %f", &c1.real, &c1.imag);

    printf("Enter real and imaginary parts of the second complex number: ");
    scanf("%f %f", &c2.real, &c2.imag);

    result = add(c1, c2);
    printf("Sum: %.2f + %.2fi\n", result.real, result.imag);

    result = subtract(c1, c2);
    printf("Difference: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
