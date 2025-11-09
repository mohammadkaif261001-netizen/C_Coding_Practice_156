#include <stdio.h>

double power(double base, int exp)
{
    if (exp == 0)
        return 1;
    else if (exp > 0)
        return base * power(base, exp - 1);
    else // negative exponent
        return 1 / power(base, -exp);
}

int main()
{
    double base, result;
    int exp;

    printf("Enter base: ");
    scanf("%lf", &base);

    printf("Enter exponent: ");
    scanf("%d", &exp);

    result = power(base, exp);
    printf("%.2lf^%d = %.2lf", base, exp, result);

    return 0;
}
