#include <stdio.h>

int main()
{
    int rows, cols, i, temp;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < rows; i++)
    {
        temp = mat[i][0];
        mat[i][0] = mat[i][cols - 1];
        mat[i][cols - 1] = temp;
    }

    printf("Matrix after interchanging first and last elements of each row:\n");
    for (i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }

    return 0;
}
