// WAP to check whether a number is armstrong number or not

#include <stdio.h>
#include <math.h>
void main()
{
    int num1, num2, num3, i = 0, d, sum = 0;
    printf("Enter any number\n");
    scanf("%d", &num1);
    num2 = num1;
    num3 = num1;
    while (num2 != 0)
    {
        num2 = num2 / 10;
        i++;
    }
    while (num3 != 0)
    {
        d = num3 % 10;
        sum = sum + pow(d, i);
        num3 = num3 / 10;
    }
    if (num1 == sum)
        printf("It is a Armstrong no.");
    else
        printf("It is not a Armstrong no.");
}
