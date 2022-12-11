#include<stdio.h>
void merge(int[],int[]);
int main()
{
    int ar[5],br[5],i;
    printf("Enter the elements of first array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&ar[i]);
    printf("Enter the elements of second array\n");
    for(i=0;i<=4;i++)
        scanf("%d",&br[i]); 
    merge(ar,br);
    return 0;
}
void merge(int ar[],int br[])
{
    int cr[10],i;
    for(i=0;i<=4;i++)
        cr[i]=ar[i];

    for(i=0;i<=4;i++)
        cr[5+i]=br[i];

    for(i=0;i<=9;i++)
        printf("%d ",cr[i]);       
}