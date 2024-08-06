#include<stdio.h>
int main()
{
    int n,m;
    printf("Enter the no.of rows:");
    scanf("%d",&n);
    m=n;
    for(int i=1;i<=n;i++)
     {
       {
        printf(" ");
       }
    for(int k=1;k<=m;k++)
      {
        if (i==1||k==1||k==m)
        printf("*");
        else
        printf(" ");
         }
     m--;
   
    printf("\n");
  }
return 0;
}