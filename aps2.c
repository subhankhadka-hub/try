#include <stdio.h>

int main()
{
    float r,perimeter,pi;
    pi=3.14159265358979323846;

    printf("Please enter the radius of the circle\n");
    scanf("%f",&r);
    perimeter=2*pi*r;
    printf("Hence,the required perimeter of the triangle is %f",perimeter);

    return 0;

    }