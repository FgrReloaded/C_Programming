// WAP to find first and last digit of a number.

#include<stdio.h>

void main(){
    int num, last, first;
    printf("Enter a number: ");
    scanf("%d", &num);
    last = num%10;
    while(num>=10){
        num = num/10;
    }
    first = num;
    printf("First = %d\Last = %d", first, last);
}
