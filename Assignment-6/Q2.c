#include<stdio.h>
int main()
{
    int CP,SP,p,l;
    printf("Enter cost price and selling price\n");
    scanf("%d%d",&CP,&SP);
    if(SP>CP)
    {
        p=(SP-CP)/CP;
        printf("Profit percentage is %d",p);
    }
    else
    {
        l=(CP-SP)/CP*100;
        printf("Loss percentage is %d",l);
    }
    return 0;
}