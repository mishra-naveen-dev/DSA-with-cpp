#include<stdio.h>
int main(void)//plus star pattern
{
    int n;
    printf("Enter odd number only:");
    scanf("%d",&n);
    for ( int i = 1; i<=n; i++)
    {
        /* code */if(i==((n/2)+1))
    {
        for(int j=1;j<=n;j++)
        {
            printf("+");
        }

    }
    else
    {
        for(int j=1;j<=n/2;j++)
        {
            printf(" ");
        }
        printf("+");
    }
    printf("\n");
}
return 0;
}