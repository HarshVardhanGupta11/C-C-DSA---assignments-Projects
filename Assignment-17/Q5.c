#include<stdio.h>
int sum_of_digits(int);
int main()
{
    int n,sum;
    printf("Enter a number\n");
    scanf("%d",&n);
    sum=sum_of_digits(n);
    printf("Sum = %d",sum);
    return 0;
}
int sum_of_digits(int n)
{
    int r;
    if(n>0)
    {
        r=n%10;
        return(r+sum_of_digits(n/10));
    }
}