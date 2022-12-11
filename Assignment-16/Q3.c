#include<stdio.h>
void odd_natural(int);
int main()
{
    int n;
    printf("Enter a natural number\n");
    scanf("%d",&n);
    odd_natural(n);
    return 0;
}
void odd_natural(int n)
{
    if(n>=1){
        odd_natural(n-1);
        printf(" %d",2*n-1);
    }
}