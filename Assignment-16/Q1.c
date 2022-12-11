#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("Enter a natural number\n");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n)
{
    if(n>=1){
        natural(n-1);
        printf(" %d",n);
    }
}