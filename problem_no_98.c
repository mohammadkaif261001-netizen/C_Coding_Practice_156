#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char str[200];
    int i, flag = 1;
    int alpha[26] = {0};

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        if (isalpha(str[i]))
        {
            alpha[tolower(str[i]) - 'a'] = 1;
        }
    }

    for (i = 0; i < 26; i++)
    {
        if (alpha[i] == 0)
        {
            flag = 0;
            break;
        }
    }

    if (flag)
        printf("The string is a pangram.");
    else
        printf("The string is not a pangram.");

    return 0;
}
