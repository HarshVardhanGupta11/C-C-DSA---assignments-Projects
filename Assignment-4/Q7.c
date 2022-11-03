#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter a number\n");
    scanf("%d",&x);
    y=x>>1;
    printf("Number rotated to one position right is %d",y);
    return 0;
}