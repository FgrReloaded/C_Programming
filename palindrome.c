// WAP to check a numbe whether it is palindrome or not.

#include <stdio.h>
void main()
{
    int n, r, sum = 0, temp;
    printf("Enter a number");
    scanf("%d", &n);
    temp = n;
    while (n > 0)
    {
        r = n % 10;
        sum = (sum * 10) + r;
        n = n / 10;
    }
    if (temp == sum)
        printf("It is a Palindrome number ");
    else
        printf("It is not a Palindrome number");
}