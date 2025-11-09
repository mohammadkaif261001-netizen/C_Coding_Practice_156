#include <stdio.h>
#include <string.h>

int main()
{
    char str[200];
    int index;

    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);

    printf("Enter the index: ");
    scanf("%d", &index);

    if (index >= 0 && index < strlen(str) && str[index] != '\n')
        printf("Unicode code point at index %d: %d", index, str[index]);
    else
        printf("Invalid index.");

    return 0;
}
