#include <stdio.h>

typedef struct {
    double real;
    double imaginary;
} ComplexNumber;

ComplexNumber add(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = num1.real + num2.real;
    result.imaginary = num1.imaginary + num2.imaginary;
    return result;
}

ComplexNumber subtract(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = num1.real - num2.real;
    result.imaginary = num1.imaginary - num2.imaginary;
    return result;
}

ComplexNumber multiply(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    result.real = (num1.real * num2.real) - (num1.imaginary * num2.imaginary);
    result.imaginary = (num1.real * num2.imaginary) + (num1.imaginary * num2.real);
    return result;
}

ComplexNumber divide(ComplexNumber num1, ComplexNumber num2) {
    ComplexNumber result;
    double denominator = (num2.real * num2.real) + (num2.imaginary * num2.imaginary);
    result.real = ((num1.real * num2.real) + (num1.imaginary * num2.imaginary)) / denominator;
    result.imaginary = ((num1.imaginary * num2.real) - (num1.real * num2.imaginary)) / denominator;
    return result;
}

void printComplexNumber(ComplexNumber num) {
    if (num.imaginary >= 0) {
        printf("%.2f + %.2fi\n", num.real, num.imaginary);
    } else {
        printf("%.2f - %.2fi\n", num.real, -num.imaginary);
    }
}

int main() {
    ComplexNumber num1 = {2, 3};
    ComplexNumber num2 = {1, -1};

    printf("Number 1: ");
    printComplexNumber(num1);

    printf("Number 2: ");
    printComplexNumber(num2);

    printf("Addition: ");
    printComplexNumber(add(num1, num2));

    printf("Subtraction: ");
    printComplexNumber(subtract(num1, num2));

    printf("Multiplication: ");
    printComplexNumber(multiply(num1, num2));

    printf("Division: ");
    printComplexNumber(divide(num1, num2));

    return 0;
}
