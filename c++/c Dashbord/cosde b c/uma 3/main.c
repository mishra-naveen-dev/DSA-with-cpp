#include <stdio.h>
#include <stdlib.h>

int main()
{
    int pi,time,si;
    float rate;
    printf("Enter the Time:");
    scanf("%d",&time);
    printf("Enter the Principle value:");
    scanf("%d",&pi);
     printf("Enter the Rate:");
    scanf("%d",&rate);
    si=pi*rate*time/100;
     printf("Simple in=%d");
    scanf("%d",&si);


    return 0;
}
