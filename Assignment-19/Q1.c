#include<stdio.h>
int greatest(int[],int);
int main()
{
    int a[10],i,max;
    for(i=0;i<=9;i++)
        scanf("%d",&a[i]);
    max=greatest(a,10);
    printf("Greatest number in the array is %d",max);
    return 0;
}
int greatest(int a[],int x)
{
    int i,max;
    max=a[0];
    for(i=1;i<=9;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    return max;
}