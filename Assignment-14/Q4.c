#include<stdio.h>
void natural(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    natural(n);
    return 0;
}
void natural(int n)
{
    int i;
    for(i=1;i<=n;i++)
        printf(" %d",i);
}