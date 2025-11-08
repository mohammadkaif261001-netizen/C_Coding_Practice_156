#include <stdio.h>
#include <math.h>

int main()
{
    int num, temp, digits, remainder, sum;

    for (num = 1; num <= 1000; num++)
    {

        temp = num;
        digits = 0;
        sum = 0;

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
            printf("%d ", num);
    }

    return 0;
}
