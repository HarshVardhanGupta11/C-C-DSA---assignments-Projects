#include<stdio.h>
int main()
{
    int N,i=1;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(i<=N)
    {
        printf("%d ",i*2);
        i++;
    }
    return 0;
}