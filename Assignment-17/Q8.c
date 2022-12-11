#include<stdio.h>
#include<stdlib.h>
int fibo(int);
int main()
{
    int N,i;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    for(i=1;i<=N;i++)
        printf("%d ",fibo(i));
}
int fibo(int i)
{
    if(i==1 || i==2)
        return 1;
    return(fibo(i-1)+fibo(i-2));
}