#include <stdio.h>

int main()
{
    int n, i, j;

    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int mat[n][n], rotated[n][n];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            rotated[j][n - 1 - i] = mat[i][j];

    printf("Matrix after 90 degree clockwise rotation:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
            printf("%d ", rotated[i][j]);
        printf("\n");
    }

    return 0;
}
