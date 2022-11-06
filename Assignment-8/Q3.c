#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d ",N+1-i);
        i++;
    }
    return 0;
}