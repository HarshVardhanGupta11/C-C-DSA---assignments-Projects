#include<stdio.h>
void firstNprime(int);
int main()
{
    int n;
    printf("Enter the value of n\n");
    scanf("%d",&n);
    firstNprime(n);
    return 0;
}
void firstNprime(int N)
{
    int i,j=2,count=0;
    while(1)
    {
        for(i=2;i<j;i++)
        {
            if(j%i==0)
                break;
        }
        if(j==i)
        {
            printf(" %d",j);
            count++;
            j++;
            if(count==N)
                break;
        }
        else
            j++;
    }
}