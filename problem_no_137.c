#include <stdio.h>
#include <stdlib.h>

int main()
{
    char filename[100];

    printf("Enter file name: ");
    scanf("%s", filename);

    char command[150];
    sprintf(command, "attrib +r %s", filename);

    if (system(command) == 0)
        printf("File '%s' is now read-only.\n", filename);
    else
        printf("Failed to make the file read-only.\n");

    return 0;
}
