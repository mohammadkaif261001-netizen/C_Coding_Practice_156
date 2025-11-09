#include <stdio.h>
#include <stdlib.h>

int main()
{
    char source[100], dest[100];
    FILE *src, *dst;
    char ch;

    printf("Enter source file name: ");
    scanf("%s", source);
    printf("Enter destination file name: ");
    scanf("%s", dest);

    src = fopen(source, "r");
    if (src == NULL)
    {
        printf("Cannot open source file.\n");
        return 1;
    }

    dst = fopen(dest, "a");
    if (dst == NULL)
    {
        printf("Cannot open destination file.\n");
        fclose(src);
        return 1;
    }

    while ((ch = fgetc(src)) != EOF)
    {
        fputc(ch, dst);
    }

    printf("Content appended successfully.\n");

    fclose(src);
    fclose(dst);

    return 0;
}
