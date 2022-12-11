#include<stdio.h>
int main()
{
    int ar[3][3],br[3][3],cr[3][3],i,j;
    printf("Enter elements of first 2-d array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Enter elements of second 2-d array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&br[i][j]);
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            cr[i][j]=ar[i][j]*br[i][j];
        }
    }

    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",cr[i][j]);
        }
        printf("\n");
    }
}