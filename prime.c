// WAP to check whether a number is prime or not.

#include <stdio.h>
void main()
{
    long int i, num;
    printf("Enter any number\n");
    scanf("%ld", &num);
    for (i = 1; i < num; i++)
    {
        if(num % i == 0)
            printf("%ld is not a prime no.");
    }
    if (i == num)
        printf("%ld is a prime number", num);
}