#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main()
{
    char name[100];
    printf("Enter your full name: ");
    fgets(name, sizeof(name), stdin);

    int n = strlen(name);
    if (name[n - 1] == '\n')
        name[n - 1] = '\0';

    printf("Initials: ");
    if (isalpha(name[0]))
        printf("%c", toupper(name[0]));

    for (int i = 0; i < n; i++)
    {
        if (name[i] == ' ' && isalpha(name[i + 1]))
        {
            printf("%c", toupper(name[i + 1]));
        }
    }

    printf("\n");
    return 0;
}
