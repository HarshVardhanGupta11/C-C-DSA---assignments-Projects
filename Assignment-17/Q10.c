#include<stdio.h>
int power(int,int);
int main()
{
    int n,p,x;
    printf("Enter number and power\n");
    scanf("%d%d",&n,&p);
    x=power(n,p);
    printf(" %d",x);
    return 0;
}
int power(int n,int p)
{
    if(p==1)
        return n;
    return(n*power(n,p-1));
}