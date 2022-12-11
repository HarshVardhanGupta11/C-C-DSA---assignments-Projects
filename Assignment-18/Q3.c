#include<stdio.h>
int main()
{
    int i,ar[10],oddsum=0,evensum=0;
    printf("Enter 10 numbers\n");
    for(i=0;i<=9;i++)
        scanf("%d",&ar[i]);
    
    for(i=0;i<=9;i++)
    {
        if(ar[i]%2==0)
            evensum=evensum+ar[i];
        else
            oddsum=oddsum+ar[i];
    }
    printf("Sum of even numbers = %d",evensum);
    printf("\nSum of odd numbers = %d",oddsum);
    return 0;
}