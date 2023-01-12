// WAP to check number for even or odd.

#include <stdio.h>
void main() {
    int a, c;
    printf("Enter a number: ");
    scanf("%d", &a);
    c = a%2;
    c==0?printf("It's a even."):printf("It's a Odd");
}