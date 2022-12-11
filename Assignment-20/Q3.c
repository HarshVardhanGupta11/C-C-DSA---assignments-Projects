#include<stdio.h>
int main()
{
    int ar[3][3],i,j;
    printf("Enter the elements of a 2-d array\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            scanf("%d",&ar[i][j]);
        }
    }
    printf("Transpose of a matrix is\n");
    for(i=0;i<=2;i++)
    {
        for(j=0;j<=2;j++)
        {
            printf("%d ",ar[j][i]);
        }
        printf("\n");
    }
    return 0;
}