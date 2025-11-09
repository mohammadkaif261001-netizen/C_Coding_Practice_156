#include <stdio.h>

int main()
{
    int decimal, octal[100], i = 0;

    printf("Enter a decimal number: ");
    scanf("%d", &decimal);

    int temp = decimal;

    if (temp == 0)
    {
        printf("Octal equivalent: 0\n");
        return 0;
    }

    while (temp != 0)
    {
        octal[i++] = temp % 8;
        temp /= 8;
    }

    printf("Octal equivalent: ");
    for (i = i - 1; i >= 0; i--)
        printf("%d", octal[i]);
    printf("\n");

    return 0;
}
