#include <stdio.h>

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];
    int *ptr = arr;

    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr + i);
    }

    int max = *ptr;

    for (int i = 1; i < n; i++)
    {
        if (*(ptr + i) > max)
            max = *(ptr + i);
    }

    printf("Largest element: %d\n", max);

    return 0;
}
