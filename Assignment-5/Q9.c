#include<stdio.h>
int main()
{
    int y;
    printf("Enter a year\n");
    scanf("%d",&y);
    if(y%100==0)
    {
        if(y%400==0)
            printf("%d is a leap year",y);
        else
            printf("%d is not a leap year\n");
    }
    else
    {
        if(y%4==0)
            printf("%d is a leap year",y);
        else
            printf("%d is not a leap year\n");  
    }
    return 0;
}