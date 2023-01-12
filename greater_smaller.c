// Check which number is greater and smaller between two numbers.

#include<stdio.h>
void main(){
    int a, b;
    printf("Enter two number: ");
    scanf("%d %d", &a, &b);
    if(a>b)
        printf("a=%d is Greater than =b%d", a, b);
    else if(a<b){
        printf("b=%d is Greater than a=%d", b, a);
    }else{
        printf("Both Numbers are equal.");
    }
}