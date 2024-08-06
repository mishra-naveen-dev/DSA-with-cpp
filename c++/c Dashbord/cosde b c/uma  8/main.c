#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,b,c,tem;
   printf("enter the first:");
   scanf("%d",&a);
   printf("enter the second:");
   scanf("%d",&b);
    printf("enter the third:");
   scanf("%d",&c);
   tem=a;
   b=c;
   c=a;
   b=tem;
printf("\nAfter swapping , first number =%d\n",a);

printf("\nAfter swapping , second number =%d\n",b);
printf("\nAfter swapping , third number =%d\n",c);

    return 0;
}
