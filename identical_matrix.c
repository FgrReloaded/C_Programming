#include <stdio.h>

void main()
{
    int a[100][100], b[100][100], r, c, flag = 0;
    printf("Enter number of row and columns of matrices: \n");
    scanf("%d%d", &r, &c);
    printf("Enter elements of matrix A: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("A[%d][%d]: ", i, j);
            scanf("%d", &a[i][j]);
        }
    }
    printf("Enter elements of matrix B: \n");
    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            printf("B[%d][%d]: ", i, j);
            scanf("%d", &b[i][j]);
        }
    }

    for (int i = 0; i < r; i++)
    {
        for (int j = 0; j < c; j++)
        {
            if (a[i][j] != b[i][j])
            {
                flag = 1;
            }
            else
            {
                flag = 0;
            }
        }
    }
    if (!flag)
        printf("Matrices are identical.");
    else{
        printf("Matrices are not identical.");
    }
}
