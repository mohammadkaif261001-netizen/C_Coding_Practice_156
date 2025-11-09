#include <stdio.h>

int main()
{
    double num;
    char str[100];

    printf("Enter a double value: ");
    scanf("%lf", &num);

    sprintf(str, "%lf", num);

    printf("Converted string: %s", str);

    return 0;
}
