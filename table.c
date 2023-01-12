// WAP to print table of given number

#include<stdio.h>

void main(){
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
    {       
        printf("%d x %d = %d\n", n, i, n*i);
    }
    
}