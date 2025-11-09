#include <stdio.h>
#include <math.h>

int main()
{
    int rows, cols, i, j;
    double sum = 0.0;

    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter elements of the matrix:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            sum += mat[i][j] * mat[i][j];

    double norm = sqrt(sum);

    int trace = 0;
    for (i = 0; i < rows && i < cols; i++)
        trace += mat[i][i];

    printf("Frobenius Norm = %.2lf\n", norm);
    printf("Trace = %d", trace);

    return 0;
}
