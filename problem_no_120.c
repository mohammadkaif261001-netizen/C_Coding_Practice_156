#include <stdio.h>

int main()
{
    char *names[2][2] = {
        {"Alice", "Bob"},
        {"Charlie", "David"}};

    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
            printf("%s ", names[i][j]);
        printf("\n");
    }

    return 0;
}
