// WAP to print right angled triangle

#include <stdio.h>
void main()
{
    long int i, j, n;
    printf("Enter number: ");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("* ");
        }
        printf("\n");
    }
}