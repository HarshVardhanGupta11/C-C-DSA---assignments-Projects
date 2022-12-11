#include<stdio.h>
int evenodd(int);
int main()
{
    int x,r;
    printf("Enter a number\n");
    scanf("%d",&x);
    r=evenodd(x);
    r==1?printf("Even"):printf("Odd");
    return 0;
}
int evenodd(int a)
{
    if(a%2)
        return 0;
    else
        return 1;
}