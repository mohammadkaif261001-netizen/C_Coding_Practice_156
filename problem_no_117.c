#include <stdio.h>

int main()
{
    int decimal, binary[32], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Binary equivalent: 0\n");
        return 0;
    }

    int temp = decimal;
    while (temp != 0)
    {
        binary[i++] = temp % 2;
        temp /= 2;
    }

    printf("Binary equivalent: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", binary[i]);
    printf("\n");

    return 0;
}
