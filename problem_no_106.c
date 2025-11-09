#include <stdio.h>
#include <stdbool.h>

const char *boolToString(bool value)
{
    if (value)
        return "true";
    else
        return "false";
}

int main()
{
    bool b1 = true;
    bool b2 = false;

    printf("b1 = %s\n", boolToString(b1));
    printf("b2 = %s\n", boolToString(b2));

    return 0;
}
