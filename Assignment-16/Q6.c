#include<stdio.h>
void rev_even(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    rev_even(n);
    return 0;
}
void rev_even(int n)
{
    if(n>=1)
    {
        printf(" %d",2*n);
        rev_even(n-1);
    }
}