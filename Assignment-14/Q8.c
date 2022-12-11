#include<stdio.h>
int permutation(int,int);
int main()
{
    int n,r,P;
    printf("Enter the value of n,r\n");
    scanf("%d%d",&n,&r);
    P=permutation(n,r);
    printf("Permutation from n and r = %d",P);
    return 0;
}
int permutation(int n,int r)
{
    int i,fact1=1,fact3=1,P;
    for(i=n;i>=1;i--)
        fact1=fact1*i;
    for(i=(n-r);i>=1;i--)
        fact3=fact3*i;
    P=(fact1)/fact3;
    return P;
}