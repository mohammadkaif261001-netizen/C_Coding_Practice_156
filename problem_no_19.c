#include <stdio.h>

int main()
{
    float a, b, c, largest;

    printf("Enter three numbers: ");
    scanf("%f %f %f", &a, &b, &c);

    if (a >= b && a >= c)
        largest = a;
    else if (b >= a && b >= c)
        largest = b;
    else
        largest = c;

    printf("Largest number = %.2f", largest);

    return 0;
}
