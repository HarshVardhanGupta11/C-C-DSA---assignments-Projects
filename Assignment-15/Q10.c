#include<stdio.h>
int terms(int);
int main()
{
    int n,s;
    printf("Enter a number\n");
    scanf("%d",&n);
    s=terms(n);
    printf("Sum=%d",s);
    return 0;
}
int terms(int n)
{
    int i,fact=1,sum=0;
    for(i=1;i<=n;i++)
    {
        fact=fact*i;
        sum=sum+(fact/i);
    }
    return sum;
}