// WAP to calculate Volume of cylinder

#include <stdio.h>
void main()
{
    int r, h;
    float vol;
    printf("Enter the radius: ");
    scanf("%d", &r);
    printf("Enter the height: ");
    scanf("%d", &h);
    vol = 3.14*r*r*h;
    printf("Volume of Cylinder = %.2f", vol);
}
