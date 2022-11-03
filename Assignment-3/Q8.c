#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter two numbers\n");
    scanf("%d%d",&x,&y);
    x=x*y;
    y=x/y;
    x=x/y;
    printf("Numbers after swapping %d %d",x,y);
    return 0;
}