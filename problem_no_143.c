#include <stdio.h>
#include <stdlib.h>
#include <dirent.h>
#include <string.h>

int main()
{
    char dirname[100];
    printf("Enter directory name: ");
    scanf("%s", dirname);

    DIR *d = opendir(dirname);
    if (d == NULL)
    {
        printf("Cannot open directory '%s'\n", dirname);
        return 1;
    }

    struct dirent *entry;
    char filepath[200];
    char line[1024];

    while ((entry = readdir(d)) != NULL)
    {
        if (entry->d_type == DT_REG)
        { // only regular files
            snprintf(filepath, sizeof(filepath), "%s/%s", dirname, entry->d_name);
            FILE *fp = fopen(filepath, "r");
            if (fp == NULL)
                continue;

            printf("\n--- Contents of %s ---\n", entry->d_name);
            while (fgets(line, sizeof(line), fp))
            {
                printf("%s", line);
            }
            fclose(fp);
        }
    }

    closedir(d);
    return 0;
}
