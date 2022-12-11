#include<stdio.h>
void print_duplicate(int[],int);
int main()
{
    int s,i;
    printf("Enter the size of the array\n");
    scanf("%d",&s);
    int ar[s];
    printf("Enter %d numbers of an array",s);
    for(i=0;i<s;i++)
        scanf("%d",&ar[i]);
    print_duplicate(ar,s);
    return 0;
}
void print_duplicate(int ar[],int s)
{
    int i,j,swap;                   
    for(i=0;i<s;i++)
    {
        for(j=i+1;j<s;j++)
        {
            if(ar[i]==ar[j])
            {
                printf("%d ",ar[i]);
                break;
            }
        }
    }
}