#include <stdio.h>

int main()
{
    int a[50][50], i, j, r, c, count=0;
    printf("ENTER THE NUMER OF ROWS AND COLUMNS :");
    scanf("%d %d", &r, &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    printf("\n");
    printf("THE ARRAY A IS :\n");
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", a[i][j]);
        }
        printf("\n");
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (a[i][j] == 0)
            {
                count++;
            }
        }
    }
    if (count > (r*c)/2)
    {
        printf("\nIt is a Sparse Matrix\n");
    }
    else
    {
        printf("\nIt is not a Sparse Matrix\n");
    }
    return 0;
}
