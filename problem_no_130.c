#include <stdio.h>

struct Complex
{
    float real;
    float imag;
};

struct Complex addComplex(struct Complex c1, struct Complex c2)
{
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

int main()
{
    struct Complex num1, num2, result;

    printf("Enter first complex number (real and imaginary): ");
    scanf("%f %f", &num1.real, &num1.imag);

    printf("Enter second complex number (real and imaginary): ");
    scanf("%f %f", &num2.real, &num2.imag);

    result = addComplex(num1, num2);

    printf("Sum: %.2f + %.2fi\n", result.real, result.imag);

    return 0;
}
