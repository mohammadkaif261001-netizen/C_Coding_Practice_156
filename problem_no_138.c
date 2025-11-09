#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *file1, *file2;
    char filename1[100], filename2[100];
    int ch1, ch2;
    long pos = 0;
    int mismatch = 0;

    printf("Enter first file name: ");
    scanf("%s", filename1);
    printf("Enter second file name: ");
    scanf("%s", filename2);

    file1 = fopen(filename1, "r");
    file2 = fopen(filename2, "r");

    if (file1 == NULL || file2 == NULL)
    {
        printf("Error opening files.\n");
        return 1;
    }

    while (1)
    {
        ch1 = fgetc(file1);
        ch2 = fgetc(file2);
        pos++;

        if (ch1 == EOF && ch2 == EOF)
            break;

        if (ch1 != ch2)
        {
            printf("Mismatch at byte %ld: '%c' != '%c'\n", pos, ch1, ch2);
            mismatch = 1;
        }
    }

    if (!mismatch)
        printf("Files are identical.\n");

    fclose(file1);
    fclose(file2);

    return 0;
}
