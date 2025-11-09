#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int choice;
    printf("Type Conversion Menu:\n");
    printf("1. Boolean to String\n");
    printf("2. Float to String\n");
    printf("3. Double to String\n");
    printf("4. String to Long\n");
    printf("5. Long to String\n");
    printf("6. Int to Char\n");
    printf("7. Char to Int\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);
    getchar(); // to consume newline

    switch (choice)
    {
    case 1:
    {
        int b;
        char str[6];
        printf("Enter boolean value (0 or 1): ");
        scanf("%d", &b);
        sprintf(str, b ? "true" : "false");
        printf("String: %s\n", str);
        break;
    }
    case 2:
    {
        float f;
        char str[50];
        printf("Enter a float: ");
        scanf("%f", &f);
        sprintf(str, "%f", f);
        printf("String: %s\n", str);
        break;
    }
    case 3:
    {
        double d;
        char str[50];
        printf("Enter a double: ");
        scanf("%lf", &d);
        sprintf(str, "%lf", d);
        printf("String: %s\n", str);
        break;
    }
    case 4:
    {
        char str[50];
        long num;
        printf("Enter a string representing number: ");
        scanf("%s", str);
        num = atol(str);
        printf("Long value: %ld\n", num);
        break;
    }
    case 5:
    {
        long num;
        char str[50];
        printf("Enter a long value: ");
        scanf("%ld", &num);
        sprintf(str, "%ld", num);
        printf("String: %s\n", str);
        break;
    }
    case 6:
    {
        int num;
        char ch;
        printf("Enter an integer (0-9): ");
        scanf("%d", &num);
        ch = num + '0';
        printf("Character: %c\n", ch);
        break;
    }
    case 7:
    {
        char ch;
        int num;
        printf("Enter a digit character: ");
        scanf(" %c", &ch);
        num = ch - '0';
        printf("Integer: %d\n", num);
        break;
    }
    default:
        printf("Invalid choice!\n");
    }

    return 0;
}
