#include <stdio.h>

int main()
{
    int rows, cols, i, j;
    int primary = 0, secondary = 0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < rows && i < cols; i++)
        primary += mat[i][i];

    for (i = 0; i < rows && i < cols; i++)
        secondary += mat[i][cols - 1 - i];

    printf("Sum of primary diagonal = %d\n", primary);
    printf("Sum of secondary diagonal = %d\n", secondary);

    return 0;
}
