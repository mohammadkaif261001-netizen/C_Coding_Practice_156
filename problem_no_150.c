#include <stdio.h>

int main()
{
    int a, b;
    FILE *fp;
    int *ptr = NULL;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);

    if (b == 0)
    {
        printf("Runtime Error: Division by zero\n");
    }
    else
    {
        printf("Result: %d\n", a / b);
    }

    fp = fopen("unknown.txt", "r");
    if (fp == NULL)
    {
        printf("Runtime Error: File not found\n");
    }
    else
    {
        fclose(fp);
    }

    if (ptr == NULL)
    {
        printf("Runtime Error: Null pointer dereference\n");
    }

    return 0;
}
