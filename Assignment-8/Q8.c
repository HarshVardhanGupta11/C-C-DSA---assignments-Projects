#include<stdio.h>
int main()
{
    int x=1,N;
    printf("Enter the value of N\n");
    scanf("%d",&N);
    while(x<=N)
    {
        printf("%d ",x*x);
        x++;
    }
    return 0;
}