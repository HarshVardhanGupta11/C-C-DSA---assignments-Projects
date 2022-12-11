#include<stdio.h>
void frequency(int[],int);
int main()
{
    int s,i;
    printf("Enter the size of the array\n");
    scanf("%d",&s);
    int ar[s];
    printf("Enter %d numbers of an array",s);
    for(i=0;i<s;i++)
        scanf("%d",&ar[i]);
    frequency(ar,s);
    return 0;
}
void frequency(int ar[],int s)
{
    int i,j,swap,c[10],count=1;                   
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
    printf("\n");
    
    int k=1;
    for(i=0;i<s;i++)
    {
        if(ar[i]==ar[i+1])
        {
            for(j=i;j<s;)
            {
                if(ar[j]==ar[j+k])
                {
                    count++;
                    k++;
                }
                else
                    break;
            }
            printf("Frequency of %d in array is %d ",ar[i],count);
            printf("\n");
            i=i+(k-1);
            count=1;
            k=1;
        }
        else
        {
            printf("Frequency of %d in array is %d ",ar[i],count);
            printf("\n");
        }
        
    }
}