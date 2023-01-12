// WAP to sum two numbers using pointer

#include <stdio.h>

int main() {
    int a, b;
    int *ptr1, *ptr2, sum;

    printf("Enter first number: ");
    scanf("%d", &a);

    printf("Enter second number: ");
    scanf("%d", &b);

    ptr1 = &a;
    ptr2 = &b;

    sum = *ptr1 + *ptr2;

    printf("Sum of %d and %d is: %d\n", a, b, sum);

    return 0;
}
