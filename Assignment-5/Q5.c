#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x>>1;
    if(x==y<<1)
        printf("Even");
    else
        printf("Odd");
    return 0;
}