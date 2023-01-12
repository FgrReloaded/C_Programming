// WAP to reverse a number

#include <stdio.h>
void main()
{
    int num, d, rev = 0;
    printf("Enter any integer\n");
    scanf("%d", &num);
    while (num != 0)
    {
        d = num % 10;
        rev = rev * 10 + d;
        num = num / 10;
    }
    printf("Reverse = % d", rev);
}