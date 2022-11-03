#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x/2;
    if(x==y*2)
        printf("Even");
    else
        printf("Odd");
    return 0;
}