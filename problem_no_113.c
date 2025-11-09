#include <stdio.h>
#include <math.h>

int main()
{
    int octal, decimal = 0, i = 0, rem;

    printf("Enter an octal number: ");
    scanf("%o", &octal); // %o reads octal input

    int temp = octal;

    while (temp != 0)
    {
        rem = temp % 10;
        decimal += rem * pow(8, i);
        temp /= 10;
        i++;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
