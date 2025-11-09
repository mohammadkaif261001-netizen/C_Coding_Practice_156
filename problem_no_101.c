#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int i = 0;

    printf("Enter a string or number: ");
    scanf("%s", str);

    while (str[i] == '0' && str[i + 1] != '\0')
        i++;

    printf("String after removing leading zeros: %s", &str[i]);

    return 0;
}
