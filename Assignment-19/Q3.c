#include<stdio.h>
void sort(int[],int);
int main()
{
    int s,i;
    printf("Enter the size of the array\n");
    scanf("%d",&s);
    int ar[s];
    printf("Enter %d numbers of an array",s);
    for(i=0;i<s;i++)
        scanf("%d",&ar[i]);
    sort(ar,s);
    return 0;
}
void sort(int ar[],int s)
{
    int i,j,swap;                   
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(ar[i]>ar[j])
            {
                swap=ar[i];
                ar[i]=ar[j];
                ar[j]=swap;
            }
        }
    }
    printf("Sorted array is \n");
    for(i=0;i<s;i++)
        printf("%d ",ar[i]);
}