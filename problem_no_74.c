#include <stdio.h>

int main()
{
    int n, i, key, k;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter element to remove: ");
    scanf("%d", &key);

    k = 0;
    for (i = 0; i < n; i++)
    {
        if (arr[i] != key)
        {
            arr[k++] = arr[i];
        }
    }

    printf("Array after removing %d: ", key);
    for (i = 0; i < k; i++)
        printf("%d ", arr[i]);

    return 0;
}
