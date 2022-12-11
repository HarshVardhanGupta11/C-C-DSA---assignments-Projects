#include<stdio.h>
int smallest(int[],int);
int main()
{
    int a[10],i,min;
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    min=smallest(a,10);
    printf("Smallest number in the array is %d",min);
    return 0;
}
int smallest(int a[],int x)
{
    int i,min;
    min=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]<min)
            min=a[i];
    }
    return min;
}