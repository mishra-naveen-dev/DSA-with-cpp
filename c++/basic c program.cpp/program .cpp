#include<stdio.h>
#include<conio.h>
#include<math.h>

int main()
{
    int x,sum,ctr;
    int i,n,m,mm,nn;
    printf("Enter the value of x:");
    scanf("%d",&x);
    printf("Enter number of terms:");
    scanf("%d",&n);
    sum =x; m=-1;
    printf("The values of the series: \n");
    printf("%d\n",x);
    for(i=1;i<n;i++)
    {
        ctr=(2*i+1);
        mm= pow(x,ctr);
        nn= mm*m;
        printf("%d \n",nn);
        sum=sum +nn;
        m=m*(-1);
    }
    printf("\nThe sum =%d\n",sum);


        }


