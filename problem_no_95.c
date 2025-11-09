#include <stdio.h>
#include <string.h>

void reverse(char str[], int start, int end)
{
    char temp;
    if (start >= end)
        return;
    temp = str[start];
    str[start] = str[end];
    str[end] = temp;
    reverse(str, start + 1, end - 1);
}

int main()
{
    char str[100];

    printf("Enter a string: ");
    scanf("%s", str);

    reverse(str, 0, strlen(str) - 1);

    printf("Reversed string: %s", str);

    return 0;
}
