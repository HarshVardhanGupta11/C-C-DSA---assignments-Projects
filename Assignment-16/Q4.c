#include<stdio.h>
void rev_odd_natural(int);
int main()
{
    int n;
    printf("Enter a natural number\n");
    scanf("%d",&n);
    rev_odd_natural(n);
    return 0;
}
void rev_odd_natural(int n)
{
    if(n>=1)
    {
        printf(" %d",2*n-1);
        rev_odd_natural(n-1);
    }
}