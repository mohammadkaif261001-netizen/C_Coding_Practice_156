#include <stdio.h>

int main()
{
    int num, reversed = 0, remainder, i;

    printf("Enter a number: ");
    scanf("%d", &num);

    for (i = num; i != 0; i /= 10)
    {
        remainder = i % 10;
        reversed = reversed * 10 + remainder;
    }

    printf("Reversed number = %d", reversed);

    return 0;
}
