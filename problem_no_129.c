#include <stdio.h>

struct Distance
{
    int feet;
    float inch;
};

int main()
{
    int n;
    printf("Enter number of distances: ");
    scanf("%d", &n);

    struct Distance d[n], sum = {0, 0.0};

    for (int i = 0; i < n; i++)
    {
        printf("Enter distance %d\n", i + 1);
        printf("Feet: ");
        scanf("%d", &d[i].feet);
        printf("Inch: ");
        scanf("%f", &d[i].inch);
        sum.feet += d[i].feet;
        sum.inch += d[i].inch;
    }

    // Convert inches >= 12 to feet
    sum.feet += (int)(sum.inch / 12);
    sum.inch = sum.inch - ((int)(sum.inch / 12) * 12);

    printf("Total Distance: %d feet %.2f inches\n", sum.feet, sum.inch);

    return 0;
}
