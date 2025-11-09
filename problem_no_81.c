#include <stdio.h>

int main()
{
    int n, i, j;
    printf("Enter the order of matrix (2 or 3): ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter elements of the matrix:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    int det = 0;

    if (n == 2)
    {
        det = mat[0][0] * mat[1][1] - mat[0][1] * mat[1][0];
    }
    else if (n == 3)
    {
        det = mat[0][0] * (mat[1][1] * mat[2][2] - mat[1][2] * mat[2][1]) - mat[0][1] * (mat[1][0] * mat[2][2] - mat[1][2] * mat[2][0]) + mat[0][2] * (mat[1][0] * mat[2][1] - mat[1][1] * mat[2][0]);
    }
    else
    {
        printf("Only 2x2 or 3x3 matrices supported.\n");
        return 0;
    }

    printf("Determinant = %d", det);

    return 0;
}
