#include<stdio.h>
int sumN(int);
int main()
{
    int n,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum=sumN(n);
    printf("Sum= %d",sum);
    return 0;
}
int sumN(int n)
{
    int sum=0;
    if(n==1)
        return 1;
    return(n+sumN(n-1));
}