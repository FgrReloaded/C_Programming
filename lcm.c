// WAP to find lcm of two number

#include<stdio.h>

void main(){
    int a, b, max;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    max = a > b ? a : b;
    while (max != 0)
    {
        if (max % a == 0 && max % b == 0)
        {
            break;
        }
        max++;
    }
    printf("Lcm = %d", max);
}