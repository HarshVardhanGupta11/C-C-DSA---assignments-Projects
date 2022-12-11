#include<stdio.h>
void distinct(int[],int);
int main()
{
    int s,i;
    printf("Enter the size of the array\n");
    scanf("%d",&s);
    int ar[s];
    printf("Enter %d numbers of an array",s);
    for(i=0;i<s;i++)
        scanf("%d",&ar[i]);
    distinct(ar,s);
    return 0;
}
void distinct(int ar[],int s)
{
    int i,j,swap,c[10],flag=0;                   
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
    printf("Distinct element array is \n");
    for(i=0;i<s;i++)
    {
        if(ar[i]!=ar[i+1])
        {
            if(ar[i]!=c[flag-1])
            {
                c[flag]=ar[i];
                flag++;
            }
        }
        else
        {
            if(ar[i]==c[flag-1])
            {
                i++;
            }
            else{
            c[flag]=ar[i];
            i++;
            flag++;
            }
        }
    }
    for(i=0;i<flag;i++)
        printf("%d ",c[i]);
}