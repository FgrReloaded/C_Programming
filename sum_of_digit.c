#include <stdio.h>

void main()
{
    int num, d, sum = 0;
    printf("Enter any integer\n");
    scanf("%d", &num);
    while (num != 0)
    {
        d = num % 10;
        sum = sum + d;
        num = num / 10;
    }
    printf("Total Sum = %d", sum);
}
