#include<stdio.h>
int main()
{
    int num,sum=0,firstDigit,lastDigit;
    printf("Enter the number to find sum of first and last digit= ");
    scanf("%d",&num);
    lastDigit=num%10;
    firstDigit=num;
    while(num>=10)
    {
        num=num/10;
    }
    firstDigit=num;
    sum=firstDigit+lastDigit;
    printf("sum of first and last digit=%d",sum);
    return 0;
    }
