#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x%10;
    x=x-y;
    printf("%d",x);
    return 0;
}