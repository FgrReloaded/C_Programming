#include <stdio.h>

void main() {
    int a[100][100], b[100][100], r, c, flag=0;
    printf("Enter number of row and columns of matrices: \n");
    scanf("%d%d", &r, &c);
    if (r != c)
    {
        printf("Matrix must be square matrix.");
    }
    else
    {
        printf("Enter elements of matrix: \n");
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                printf("A[%d][%d]: ", i, j);
                scanf("%d", &a[i][j]);
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                b[j][i] = a[i][j];
            }
        }
        for (int i = 0; i < r; i++)
        {
            for (int j = 0; j < c; j++)
            {
                if (a[i][j] != b[i][j])
                {
                    flag++;
                    break;
                }
            }
        }
        if (!flag)
            printf("Matrix is symmetric.");
        else
        {
            printf("Matrix is not symmetric.");
        }
    }
}
