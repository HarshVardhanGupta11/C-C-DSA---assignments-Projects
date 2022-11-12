#include<stdio.h>
int main()
{
    int num,r,cube=0,arm=0,i;
    for(i=1;i<=1000;i++)
    {
        num=i;
        while(num)
        {
            r=num%10;
            cube=r*r*r;
            arm=arm+cube;
            num=num/10;
            if(cube==i)
                printf("%d ",i);
        }
    }
    return 0;
}