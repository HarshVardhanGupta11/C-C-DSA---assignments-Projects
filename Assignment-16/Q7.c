#include<stdio.h>
void square(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    square(n);
    return 0;
}
void square(int n)
{
    if(n>=1)
    {
        square(n-1);
        printf(" %d",n*n);
    }
}