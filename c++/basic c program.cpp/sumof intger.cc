#include<stdio.h>
int getSum(int n)
{
    int sum=0;
    while (n!=0){
        sum=sum+n%10;
    n=n/10;

}
return sum;
}
int main()
{
    int n;
    printf("Enter the any intger:");
    scanf("%d",&n);
    printf("%d",getSum(n));
    return 0;
}
