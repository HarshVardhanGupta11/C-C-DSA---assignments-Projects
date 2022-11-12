#include<stdio.h>
int main()
{
    int num,r,cube=0,arm=0,dup;
    printf("Enter a number\n");
    scanf("%d",&num);
    dup=num;
    while(num)
    {
        r=num%10;
        cube=r*r*r;
        arm=arm+cube;
        num=num/10;
    }
    if(dup==arm)
        printf("It is a armstrong number\n");
    else
        printf("It is not a armstrong number\n");
    return 0;
}