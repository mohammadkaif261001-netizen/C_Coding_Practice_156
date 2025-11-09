#include <stdio.h>
#include <string.h>

int main()
{
    char str1[200], str2[100], result[300];
    int pos, i, j, k = 0;

    printf("Enter the main string: ");
    fgets(str1, sizeof(str1), stdin);
    str1[strcspn(str1, "\n")] = '\0';

    printf("Enter the string to insert: ");
    fgets(str2, sizeof(str2), stdin);
    str2[strcspn(str2, "\n")] = '\0';

    printf("Enter the position to insert at (0-based index): ");
    scanf("%d", &pos);

    for (i = 0; i < pos && str1[i] != '\0'; i++)
        result[k++] = str1[i];

    for (j = 0; str2[j] != '\0'; j++)
        result[k++] = str2[j];

    while (str1[i] != '\0')
        result[k++] = str1[i++];

    result[k] = '\0';

    printf("Resultant string: %s", result);

    return 0;
}
