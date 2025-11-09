#include <stdio.h>
#include <stdlib.h>

int main()
{
    char str[100];
    long value;

    printf("Enter a numeric string: ");
    scanf("%s", str);

    value = strtol(str, NULL, 10);

    printf("Converted long value: %ld", value);

    return 0;
}
