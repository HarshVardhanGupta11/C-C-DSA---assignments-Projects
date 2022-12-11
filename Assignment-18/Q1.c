#include<stdio.h>
int main()
{
    int i,ar[10],sum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&ar[i]);
    
    for(i=0;i<=9;i++)
        sum=sum+ar[i];
    printf("Sum=%d",sum);
    return 0;
}