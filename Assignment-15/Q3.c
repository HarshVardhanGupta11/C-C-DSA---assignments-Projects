#include<stdio.h>
void isPrime(int);
int main()
{
    int x,p;
    printf("Enter a number\n");
    scanf("%d",&x);
    isPrime(x);
    return 0;
}
void isPrime(int n)
{
    int i;
    for(i=2;i<n;i++)
    {
        if(n%i==0)
            break;
    }
    if(i==n)
        printf("Prime\n");
    else
        printf("Not Prime\n");
}