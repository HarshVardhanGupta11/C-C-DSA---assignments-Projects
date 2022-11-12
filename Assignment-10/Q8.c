#include<stdio.h>
int main()
{
    int i,j,num;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=num+1; ;i++)
    {
        for(j=i-1;j>1;j--)
        {
            if(i%j==0)
                break;
        }
        if(j==1)
        {
            printf("%d ",i);
            break;
        }
    }
}