#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,a,b,sum;
    printf("Enter number=");
    scanf("%d",&n);
    a=(n/100)%10;
    b=(n/10)%10;
    sum=a+b;
    printf("sum of middle two digit=%d",sum);
    return 0;
}
