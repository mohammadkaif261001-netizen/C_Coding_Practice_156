#include <stdio.h>

int main()
{
    char str[100];
    char *start, *end;
    int flag = 1;

    printf("Enter a string: ");
    scanf("%s", str);

    start = str;
    end = str;
    while (*end != '\0') // move end to last character
        end++;
    end--; // point to last character

    while (start < end)
    {
        if (*start != *end)
        {
            flag = 0;
            break;
        }
        start++;
        end--;
    }

    if (flag)
        printf("String is a palindrome.\n");
    else
        printf("String is not a palindrome.\n");

    return 0;
}
