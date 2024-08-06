#include <stdio.h>
#include <stdlib.h>

int main()
{
    int eng,mat,hin,sci,socscien,Average;

    printf("Enter the maerks of English:");
    scanf("%d",&eng);
     printf("Enter the maerks of Maths:");
    scanf("%d",&mat);
     printf("Enter the maerks of Hindi:");
    scanf("%d",&hin);
     printf("Enter the maerks of Science:");
    scanf("%d",&sci);
     printf("Enter the maerks of Social Science:");
    scanf("%d",&socscien);
    Average =(eng+hin+sci+mat+socscien)/5;
    printf("Print the average of percentage :%d");
    scanf("%d",&Average);

    return 0;
}
