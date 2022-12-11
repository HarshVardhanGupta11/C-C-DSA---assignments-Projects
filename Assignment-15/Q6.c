#include<stdio.h>
void nos(int,int);
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    nos(n1,n2);
    return 0;
}
void nos(int a,int b)
{
    int i,j;
    for(j=a+1;j<b;j++)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(j==i)
        {
            printf(" %d",i);
        }
    }
}