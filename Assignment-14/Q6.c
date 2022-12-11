#include<stdio.h>
int fact(int);
int main()
{
    int n,f;
    printf("Enter a number\n");
    scanf("%d",&n);
    f=fact(n);
    printf("Factorial= %d",f);
    return 0;
}
int fact(int n)
{
    int i,f;
    for(i=n;i>=1;i--)
        f=f*i;
    return f;
}