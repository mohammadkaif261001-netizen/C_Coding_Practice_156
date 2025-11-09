#include <stdio.h>

int main()
{
    int n, i, j, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements in sorted order:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    if (n == 0)
        return 0;

    k = 0;
    for (i = 1; i < n; i++)
    {
        if (arr[i] != arr[k])
            arr[++k] = arr[i];
    }

    printf("Array after removing duplicates: ");
    for (i = 0; i <= k; i++)
        printf("%d ", arr[i]);

    return 0;
}
