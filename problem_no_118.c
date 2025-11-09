#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    char binary[100];
    int decimal = 0, len, i, power;

    printf("Enter a binary number: ");
    scanf("%s", binary);

    len = strlen(binary);
    power = 0;

    for (i = len - 1; i >= 0; i--)
    {
        if (binary[i] == '1')
            decimal += 1 << power;
        else if (binary[i] != '0')
        {
            printf("Invalid binary number.\n");
            return 1;
        }
        power++;
    }

    printf("Decimal equivalent: %d\n", decimal);
    return 0;
}
