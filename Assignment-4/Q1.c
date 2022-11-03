#include<stdio.h>
int main()
{
    int x,y,sum=0;
    printf("Enter a three digit number\n");
    scanf("%d",&x);
    y=x%10;
    x=x/10;
    sum=sum+y;
    y=x%10;
    x=x/10;
    sum=sum+y;
    y=x%10;
    x=x/10;
    sum=sum+y;
    printf("Sum=%d",sum);
    return 0;
}