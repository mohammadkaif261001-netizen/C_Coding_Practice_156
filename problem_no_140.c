#include <stdio.h>
#include <string.h>

int main()
{
    char filename[100], pattern[100], line[1000];

    printf("Enter file name: ");
    scanf("%s", filename);
    printf("Enter pattern to search: ");
    scanf("%s", pattern);

    FILE *fp = fopen(filename, "r");
    if (fp == NULL)
    {
        printf("Cannot open file.\n");
        return 1;
    }

    printf("Lines matching pattern '%s':\n", pattern);
    while (fgets(line, sizeof(line), fp) != NULL)
    {
        if (strstr(line, pattern) != NULL)
            printf("%s", line);
    }

    fclose(fp);
    return 0;
}
