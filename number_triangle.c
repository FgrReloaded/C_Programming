// WAP to print right angled triangle of numbers

#include <stdio.h>

void main()
{
    int i, j, n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }
        printf("\n");
    }
}