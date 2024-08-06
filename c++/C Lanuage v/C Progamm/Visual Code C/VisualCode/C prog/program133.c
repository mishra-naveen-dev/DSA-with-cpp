#include<stdio.h>
#include<conio.h>
int addition(int m,int n)
{
    int p;
    p=m+n;
    return (p);

}
float simpleIntresrt(int p,float r,int t,float si)
{
    float si;
    si=p*r*t/100;
    return (si);
}
int main()
{

    int ch;
    printf("\n Press 1 for Addition:");
    printf("Press 2 for SimpleIntrest:");
    scanf("%d",&ch);
    switch (ch)
    {
    case 1:
    {
        int a,b,c;
        printf("\nEnter the values: \t");
        scanf("%d %d",&a,&b);
        c=addition(a,b);
        printf("\nAddition=%d",c);
    
        break;
    }
    
    case 2:
    {
        int pr,r,t;
        printf("\nEnter the Amount: ");
        scanf("%d",&pr);
         printf("\nEnter the rate: \t");
        scanf("%d",&r);
          printf("\nEnter the Time: \t");
        scanf("%d",&t);
       si=pr*r*t/100;
        printf("\nSimpleIntresrt=%f",si);
    
        break;
    }

}
}
