
#include <stdio.h>

int main()
{
    char str1[100], str2[100];
    int i = 0;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    while (str1[i] != '\0' && str2[i] != '\0')
    {
        if (str1[i] < str2[i])
        {
            printf("First string is less than second string.");
            return 0;
        }
        else if (str1[i] > str2[i])
        {
            printf("First string is greater than second string.");
            return 0;
        }
        i++;
    }

    if (str1[i] == '\0' && str2[i] == '\0')
        printf("Strings are equal.");
    else if (str1[i] == '\0')
        printf("First string is less than second string.");
    else
        printf("First string is greater than second string.");

    return 0;
}
