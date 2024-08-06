#include<stdio.h>
int main()
{
    float length, width,Perimeter,Area;
    printf("Enter length of the rectangle:");
    scanf("%f", &length);
    printf("Enter width of the rectangle:");
    scanf("%f", &width);
    Perimeter=2*(length + width);
    Area=length*width;

    printf(" Perimeter of rectangle = %f",Perimeter);
    printf(" \n Area of rectangle = %f",Area);

    return 0;
}
