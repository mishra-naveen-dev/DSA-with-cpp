#include <stdio.h>
#include <stdlib.h>

int main()
{
    int sal,da,hra,gs;
    printf("Enter the salary of  Rmaesh ");
    scanf("%d",&sal);
    da=0.4*sal;
    hra=0.2*sal;
    gs=sal+da+hra;
    printf("Calac his gross salary: %d",gs);
    scanf("%d",&gs);
    return 0;
}
