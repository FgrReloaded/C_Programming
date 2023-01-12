// WAP to find area and circumference of circle

#include<stdio.h>
void main()
{
    float x, cf, area;
    printf("Enter number\n");
    scanf("%f", &x);
    printf("Radius is %f", x);
    area = 3.14*x*x;
    cf = 2*3.14*x;
    printf("Area is %f\ncircumference is %f", area, cf);
}
