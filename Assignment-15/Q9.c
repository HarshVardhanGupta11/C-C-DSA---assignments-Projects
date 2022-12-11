#include<stdio.h>
#include<math.h>
int digit1(int);
void arm(int,int);
int digit1(int n1)
{
    int r,count1=0;
    while(n1)
    {
        r=n1%10;
        count1++;
        n1=n1/10;
    }
    return count1;
}
void arm(int n1,int n2)
{
    int i,c1,r,cube=0;
    for(i=n1+1;i<=n2-1;i++)
    {
        c1=digit1(i);
        int x=i;
        cube=0;
        while(x)
        {
            r=x%10;
            cube=cube+pow(x,c1);
            x=x/10;
        }
        if(x==cube)
            printf(" %d",x);
    }
}
int main()
{
    int n1,n2;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    arm(n1,n2);
    return 0;
}