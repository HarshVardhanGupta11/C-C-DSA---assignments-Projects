#include<stdio.h>
int fact(int);
int main()
{
    int n,facto;
    printf("Enter a number\n");
    scanf("%d",&n);
    facto=fact(n);
    printf("Factorial= %d",facto);
    return 0;
}
int fact(int n)
{
    if(n==1)
        return 1;
    return(n*fact(n-1));
}