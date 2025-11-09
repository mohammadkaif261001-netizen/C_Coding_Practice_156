#include <stdio.h>

int main()
{
    long num;
    char str[50];

    printf("Enter a long value: ");
    scanf("%ld", &num);

    sprintf(str, "%ld", num);

    printf("Converted string: %s", str);

    return 0;
}
