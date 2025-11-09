#include <stdio.h>

int main()
{
    int decimal, i = 0;
    char hex[100];
    char hexDigits[] = "0123456789ABCDEF";

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    if (decimal == 0)
    {
        printf("Hexadecimal equivalent: 0\n");
        return 0;
    }

    int temp = decimal;
    while (temp != 0)
    {
        hex[i++] = hexDigits[temp % 16];
        temp /= 16;
    }

    printf("Hexadecimal equivalent: ");
    for (i = i - 1; i >= 0; i--)
        printf("%c", hex[i]);
    printf("\n");

    return 0;
}
