#include <stdio.h>
int main()
{
    int l,b, area ,perimeter;
    printf("Enter the length and breadth of the rectangle\n");
    scanf("%d%d",&l,&b);
    area=l*b;
    perimeter=2*(l+b);
    printf("The required area and perimeter of rectangle is %d and %d respectively",area,perimeter);
    return 0; 
}