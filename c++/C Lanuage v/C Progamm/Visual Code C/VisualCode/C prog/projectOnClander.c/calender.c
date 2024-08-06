#include<stdio.h>
void main()
{
    int m,h,i=1,a,b,j=1;
    printf("\n Enter the month of the year 2022:\n");
    scanf("%d",&m);
    switch(m)
    {
        case 1:
         a=7;
         b=31;
       break;

        case 2:
         a=3;
         b=28;
       break;
          
        case 3:
         a=3;
         b=31;
       break;
        
        case 4:
         a=5;
         b=30;
       break;
        
        case 5:
         a=0;
         b=31;
       break;
        
        case 6:
         a=3;
         b=30;
       break;
        
        case 7:
         a=5;
         b=31;
       break;
        
        case 8:
         a=2;
         b=31;
       break;
        
        case 9:
         a=5;
         b=30;
       break;
        
        case 10:
        a=7;
         b=31;
       break;
        
        case 11:
         a=3;
         b=30;
       break;
        
        case 12:
         a=5;
         b=31;
       break;
        
        default:
        printf("\n Invalid Data is given");
        
    }
    printf("\n\n");
    printf("\t\t\t -%d-2022\n\n",m);
    printf("      SUN  MON  TUE  WED  THU  FRI  SAT  SUN \n\n");
    switch(a)
    {
        case 1:
        printf("\t%d",i);
       break;
        case 2:
        printf("\t\t%d",i);
       break;
        case 3:
        printf("\t\t\t%d",i);
       break;
        case 4:
        printf("\t\t\t\t%d",i);
       break;
        case 5:
        printf("\t\t\t\t\t%d",i);
       break;
        case 6:
        printf("\t\t\t\t\t\t%d",i);
       break;
        case 7:
        printf("\t\t\t\t\t\t\t%d",i);
       break;
        

    }
    h=8-a;
   for( i=2;i<=h;i++)

{
    printf("\t%d",i);
}
printf("\n");

for( j=h+1;j<=i;j++)
{
    if(j==8)
{
printf("\n");
j=1;
}
printf("\t%d",j);
j++;
}
}