#include<stdio.h>
int main()
{
    int i,j,num1,num2;
    printf("Enter two numbers\n");
    scanf("%d %d",&num1,&num2);
    for(i=num1+1;i<num2;i++)
    {
        for(j=i-1;j>1;j--)
        {
            if(i%j==0)
                break;
        }
        if(j==1)
            printf("%d ",i);
    }
}