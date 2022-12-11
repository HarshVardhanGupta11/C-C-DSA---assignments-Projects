#include<stdio.h>
void reverse(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    reverse(n);
    return 0;
}
void reverse(int n)
{
    int r;
    if(n>=1)
    {
        r=n%10;
        n=n/10;
        printf("%d",r);
        reverse(n);
    }
}