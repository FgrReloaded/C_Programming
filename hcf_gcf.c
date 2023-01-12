// WAP to find hcf of two number

#include <stdio.h>

void main()
{
    int a, b, min;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    min = a < b ? a : b;
    while (min != 0)
    {
        if (a % min == 0 && b % min == 0)
        {
            break;
        }
        min--;
    }
    printf("HCF = %d", min);
}