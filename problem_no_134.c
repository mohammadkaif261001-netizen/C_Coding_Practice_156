#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *fp;
    char str[100];

  
    fp = tmpfile();
    if (fp == NULL)
    {
        printf("Unable to create temporary file.\n");
        return 1;
    }

   
    printf("Enter a string to write in temporary file: ");
    scanf(" %[^\n]", str);
    fprintf(fp, "%s", str);

 
    fseek(fp, 0, SEEK_SET);

  
    printf("Data read from temporary file: ");
    while (fgets(str, sizeof(str), fp) != NULL)
    {
        printf("%s", str);
    }

    fclose(fp);
    return 0;
}
