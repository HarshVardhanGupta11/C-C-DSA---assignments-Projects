#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    x=x/10;
    printf("Number without last digit is %d ",x);
    return 0;
}