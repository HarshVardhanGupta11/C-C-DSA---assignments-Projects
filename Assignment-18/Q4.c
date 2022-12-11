#include<stdio.h>
int main()
{
    int i,ar[10],max;
    printf("Enter 10 number of an array\n");
    for(i=0;i<=9;i++)
        scanf("%d",&ar[i]);
    max=ar[0];
    for(i=1;i<=9;i++)
    {
        if(ar[i]>max)
        max=ar[i];
    }
    printf("Greatest element in the array is %d",max);
    return 0;
}