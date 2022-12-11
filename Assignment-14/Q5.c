#include<stdio.h>
void oddnatural(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    oddnatural(n);
    return 0;
}
void oddnatural(int n)
{
    for(int i=1;i<=n;i=i+2)
        printf(" %d",i);
}