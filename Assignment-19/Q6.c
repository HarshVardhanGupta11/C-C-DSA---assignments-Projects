#include<stdio.h>
void swap(int,int,int[]);
int main()
{
    int i,j,ar[10],k;
    printf("Enter 10 elements of an array\n");
    for(k=0;k<=9;k++)
        scanf("%d",&ar[k]);
    printf("Enter two indices of array whose values you want to swap\n");
    scanf("%d%d",&i,&j);
    swap(i,j,ar);
    return 0;
}
void swap(int i,int j,int ar[])
{
    int a,k;
    a=ar[i];
    ar[i]=ar[j];
    ar[j]=a;
    printf("Array after swapping is\n");
    for(k=0;k<=9;k++)
        printf("%d ",ar[k]);
}