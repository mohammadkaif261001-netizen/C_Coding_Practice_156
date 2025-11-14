#include <stdio.h>
#include <math.h>

int main()
{
    int r = 10;
    for (int y = -r; y <= r; y++)
    {
        for (int x = -r; x <= r; x++)
        {
            if (round(sqrt(x * x + y * y)) == r)
                printf("*");
            else
                printf(" ");
        }
        printf("\n");
    }
    return 0;
}
