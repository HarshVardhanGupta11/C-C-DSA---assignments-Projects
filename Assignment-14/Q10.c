#include<stdio.h>
void primefactors(int);
int main()
{
    int num;
    printf("Enter a number\n");
    scanf("%d",&num);
    primefactors(num);
    return 0;
}
void primefactors(int x)
{
    int i;
    for(i=2;x>1;)
    {
        if(x%i==0)
        {
            printf(" %d",i);
            x=x/i;
        }
        else
            i++;
    }
}