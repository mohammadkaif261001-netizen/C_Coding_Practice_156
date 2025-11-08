#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digits = 0, remainder;
    int sum = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    while (temp != 0)
    {
        temp /= 10;
        digits++;
    }

    temp = num;

    while (temp != 0)
    {
        remainder = temp % 10;
        sum += pow(remainder, digits);
        temp /= 10;
    }

    if (sum == num)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");

    return 0;
}
