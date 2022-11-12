#include<stdio.h>
int main()
{
    int N,i,sum=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+2*i;
    }
    printf("Sum of first %d even natural number is %d",N,sum);
    return 0;
}