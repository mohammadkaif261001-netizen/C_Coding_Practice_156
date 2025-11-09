#include <stdio.h>

int main()
{
    int num;
    char ch;

    printf("Enter an integer (ASCII value): ");
    scanf("%d", &num);

    ch = (char)num;

    printf("Converted character: %c", ch);

    return 0;
}
