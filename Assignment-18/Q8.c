#include<stdio.h>
int main()
{
    int ar[10],i,j,s;
    printf("Enter 10 numbers of an array\n");
    for(i=0;i<=9;i++)
        scanf("%d",&ar[i]);
    for(i=0;i<=9;i++)
    {
        for(j=i+1;j<=9;j++)
        {
            if(ar[i]>ar[j])
            {
                s=ar[i];
                ar[i]=ar[j];
                ar[j]=s;
            }
        }
    }
    printf("%d ",ar[1]);
    return 0;
}