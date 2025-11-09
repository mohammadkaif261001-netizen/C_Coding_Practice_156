#include <stdio.h>

int main()
{
    float num;
    char str[50];

    printf("Enter a float value: ");
    scanf("%f", &num);

    sprintf(str, "%f", num);

    printf("Converted string: %s", str);

    return 0;
}
