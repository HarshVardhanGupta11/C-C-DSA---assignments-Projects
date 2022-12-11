#include<stdio.h>
void decimal2binary(int);
int main()
{
    int n;
    printf("Enter any number\n");
    scanf("%d",&n);
    decimal2binary(n);
    return 0;
}
void decimal2binary(int n)
{
    int r;
    if(n>=1)
    {
        r=n%2;
        n=n/2;
        decimal2binary(n);
        printf("%d",r);
    }
}