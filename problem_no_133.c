#include <stdio.h>
#include <stdlib.h>

struct MyStruct
{
    int n;
    int arr[];
};

int main()
{
    int size;
    printf("Enter size of array: ");
    scanf("%d", &size);

    // Allocate memory for structure + flexible array
    struct MyStruct *ptr = malloc(sizeof(struct MyStruct) + size * sizeof(int));

    ptr->n = size;

    // Input array elements
    for (int i = 0; i < ptr->n; i++)
    {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &ptr->arr[i]);
    }

    // Print array elements
    printf("Array elements: ");
    for (int i = 0; i < ptr->n; i++)
        printf("%d ", ptr->arr[i]);

    free(ptr); // free allocated memory
    return 0;
}
