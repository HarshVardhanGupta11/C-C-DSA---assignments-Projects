#include<stdio.h>
int main()
{
    int i,ar[10],min;
    printf("Enter 10 number of an array\n");
    for(i=0;i<=9;i++)
        scanf("%d",&ar[i]);
    min=ar[0];
    for(i=1;i<=9;i++)
    {
        if(ar[i]<min)
        min=ar[i];
    }
    printf("Smallest element in the array is %d",min);
    return 0;
}