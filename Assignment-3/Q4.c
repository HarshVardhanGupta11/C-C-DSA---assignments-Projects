#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    x=x%10;
    printf("Unit digit is %d",x);
    return 0;
}