#include<stdio.h>
void rev_natural(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    rev_natural(n);
    return 0;
}
void rev_natural(int n)
{
    if(n>=1)
    {
        printf(" %d",n);
        rev_natural(n-1);
    }
}
