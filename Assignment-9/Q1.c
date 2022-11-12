#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i;
    }
    printf("Sum of first %d natural number is %d",N,sum);
    return 0;
}