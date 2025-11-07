#include <stdio.h>
#include <math.h>

int main()
{
    float p, r, t, amount, ci;

    printf("Enter Principal: ");
    scanf("%f", &p);

    printf("Enter Rate: ");
    scanf("%f", &r);

    printf("Enter Time: ");
    scanf("%f", &t);

    amount = p * pow((1 + r / 100), t);
    ci = amount - p;

    printf("Compound Interest = %.2f", ci);

    return 0;
}
