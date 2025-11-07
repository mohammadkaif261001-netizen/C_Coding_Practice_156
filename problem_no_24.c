#include <stdio.h>

int main()
{
    char operator;
    double num1, num2, result;

    printf("Enter first number: ");
    scanf("%lf", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%lf", &num2);

    if (operator == '+')
        result = num1 + num2;
    else if (operator == '-')
        result = num1 - num2;
    else if (operator == '*')
        result = num1 * num2;
    else if (operator == '/')
    {
        if (num2 != 0)
            result = num1 / num2;
        else
        {
            printf("Error: Division by zero");
            return 1;
        }
    }
    else
    {
        printf("Invalid operator");
        return 1;
    }

    printf("Result = %.2lf", result);

    return 0;
}
