#include <stdio.h>
#include <stdlib.h>

int *createDynamicArray(int n)
{
    int *arr = (int *)malloc(n * sizeof(int));
    if (arr == NULL)
    {
        printf("Memory allocation failed.\n");
        exit(1);
    }
    for (int i = 0; i < n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    return arr;
}

int main()
{
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int *ptr = createDynamicArray(n);

    printf("Array elements: ");
    for (int i = 0; i < n; i++)
        printf("%d ", ptr[i]);

    free(ptr); // free allocated memory
    return 0;
}
