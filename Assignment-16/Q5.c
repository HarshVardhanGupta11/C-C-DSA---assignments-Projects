#include<stdio.h>
void even_natural(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    even_natural(n);
    return 0;
}
void even_natural(int n)
{
    if(n>=1)
    {
        even_natural(n-1);
        printf(" %d",2*n);
    }
}