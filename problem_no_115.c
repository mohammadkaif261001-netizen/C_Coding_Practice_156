#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char hex[100];
    int decimal = 0, i, len, val;

    printf("Enter a hexadecimal number: ");
    scanf("%s", hex);

    len = strlen(hex);

    for (i = 0; i < len; i++)
    {
        if (hex[i] >= '0' && hex[i] <= '9')
            val = hex[i] - '0';
        else if (hex[i] >= 'A' && hex[i] <= 'F')
            val = hex[i] - 'A' + 10;
        else if (hex[i] >= 'a' && hex[i] <= 'f')
            val = hex[i] - 'a' + 10;
        else
        {
            printf("Invalid hexadecimal number.\n");
            return 1;
        }
        decimal += val * pow(16, len - 1 - i);
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
