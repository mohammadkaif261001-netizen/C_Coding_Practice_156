#include <stdio.h>
#include <string.h>

int main()
{
    int n, m;
    printf("Enter number of strings: ");
    scanf("%d", &n);
    printf("Enter maximum length of each string: ");
    scanf("%d", &m);

    char arr[n][m + 1], temp[m + 1];

    for (int i = 0; i < n; i++)
    {
        printf("Enter string %d: ", i + 1);
        scanf("%s", arr[i]);
    }

    for (int i = 0; i < n - 1; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(arr[i], arr[j]) > 0)
            {
                strcpy(temp, arr[i]);
                strcpy(arr[i], arr[j]);
                strcpy(arr[j], temp);
            }
        }
    }

    printf("Sorted strings:\n");
    for (int i = 0; i < n; i++)
        printf("%s\n", arr[i]);

    return 0;
}
