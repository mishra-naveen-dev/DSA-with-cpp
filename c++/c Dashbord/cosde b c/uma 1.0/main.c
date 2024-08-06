#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, sum,a,b;

    //a= first number
    //b=last number
    //sum sum of first and last digit
     printf("Enter the number to find sum of first and last digit=");
     scanf("%d",&n);
     a=(n/1000)%10;
     b=(n/1)%10;
     sum=a+b;
     printf("sum of first and last digit=%d",sum);
    return 0;
}
