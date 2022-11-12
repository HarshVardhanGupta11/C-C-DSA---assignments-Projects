#include<stdio.h>
int main()
{
    int i,N,sum=0;
    printf("Enter thye value of N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
    {
        sum=sum+i*i;
    }
    printf("Sum of square of first %d natural number is %d",N,sum);
    return 0;
}