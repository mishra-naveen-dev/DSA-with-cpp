#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l,b,r, are, area;
    float pi=3.14;
    printf("Enter the radius:");
    scanf("%f",&r);
    printf("Enter the length:");
    scanf("%f",&l);
    printf("Enter the breath:");
    scanf("%f",&b);
    area=l*b;
    are=pi*r*r;
    printf("Area of rectangle:%f",area);
    scanf("%f",&area);
    printf("\n Area of circle: %f",are);
    scanf("%f",&are);
   return 0;
}
