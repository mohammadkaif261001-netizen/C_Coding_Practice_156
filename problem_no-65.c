#include <stdio.h>

int main()
{
    int n, i;
    double sum = 0.0, average;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (i = 0; i < n; i++)
        sum += arr[i];

    average = sum / n;

    printf("Average = %.2lf", average);

    return 0;
}
