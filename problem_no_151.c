
#include <stdio.h>

int main()
{
    int a = 10, b = 0;

    printf("Compile-time Error Example: Missing semicolon, wrong syntax, undeclared variable\n");

    if (b == 0)
        printf("Run-time Error Example: Division by zero\n");
    else
        printf("Result: %d\n", a / b);

    int x = 5, y = 10;
    int wrong_result = x + y;
    printf("Logical Error Example: Expected subtraction but performed addition. Result = %d\n", wrong_result);

    return 0;
}
