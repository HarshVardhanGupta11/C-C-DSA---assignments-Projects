#include<stdio.h>
int main()
{
    int a;
    printf("Enter a number\n");
    scanf("%d",&a);
    if(a%3==0 || a%7==0)
        printf("Number is divisible by 3 or 7");
    else
        printf("Number is not divisible by 3 or 7");
    return 0;
}