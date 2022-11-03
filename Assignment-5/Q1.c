#include<stdio.h>
int main()
{
    int x;
    printf("Enter a number\n");
    scanf("%d",&x);
    if(x>0)
        printf("Positive number\n");
    else
        printf("Non Positive\n");
    return 0;
}