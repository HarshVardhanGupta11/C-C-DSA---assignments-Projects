#include<stdio.h>
int nextPrime(int);
int main()
{
    int x,p;
    printf("Enter a number\n");
    scanf("%d",&x);
    p=nextPrime(x);
    printf("Next prime number is %d",p);
    return 0;
}
int nextPrime(int n)
{
    int i,j=n+1;
    while(1)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(j==i)
            return j;
        else
            j++;
    }
}