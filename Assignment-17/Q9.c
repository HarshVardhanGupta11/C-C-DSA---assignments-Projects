#include<stdio.h>
int count(int);
int main()
{
    int n,c;
    printf("Enter a number\n");
    scanf("%d",&n);
    c=count(n);
    printf("No of digits = %d",c);
    return 0;
}
int count(int n)
{
    int c=0;
    if(n>0)
    {
        c++;
        c=c+count(n/10);
        return c;
    }
    else
        return c;
}