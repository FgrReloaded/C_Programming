// Swapping two numbers without using third variable and arthimetic operators.

#include <stdio.h>
void main()
{
    int a, b;
    printf("Enter two number: ");
    scanf("%d%d", &a, &b);
    printf("a is %d and b is %d\n", a, b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b;
    printf("a is %d and b is %d", a, b);
}