#include<stdio.h>
int main()
{
    int x,y,z;
    printf("Enter two numbers\n");
    scanf("%d,%d",&x,&y);
    z=x;
    x=y;
    y=z;
    printf("Numbers after swapping %d %d",x,y);
    return 0;
}