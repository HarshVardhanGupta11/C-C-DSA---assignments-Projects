#include<stdio.h>
int main()
{
    int i,ar[10],sum=0;
    float avg;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&ar[i]);
    
    for(i=0;i<=9;i++)
        sum=sum+ar[i];
    avg=sum/10.0;
    printf("Average=%f",avg);
    return 0;
}