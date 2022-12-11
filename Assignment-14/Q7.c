#include<stdio.h>
int combination(int,int);
int main()
{
    int n,r,C;
    printf("Enter the value of n,r\n");
    scanf("%d%d",&n,&r);
    C=combination(n,r);
    printf("Combination from n and r = %d",C);
    return 0;
}
int combination(int n,int r)
{
    int i,fact1=1,fact2=1,fact3=1,C;
    for(i=n;i>=1;i--)
        fact1=fact1*i;
    for(i=r;i>=1;i--)
        fact2=fact2*i;
    for(i=(n-r);i>=1;i--)
        fact3=fact3*i;
    C=(fact1)/(fact2*fact3);
    return C;
}