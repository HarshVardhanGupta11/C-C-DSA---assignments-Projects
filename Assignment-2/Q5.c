#include<stdio.h>
int main()
{
    int CP,SP;
    float a;
    printf("Enter cost price and selling price of banana\n");
    scanf("%d%d",&CP,&SP);
    a=(SP-CP)/12.0*25;
    printf("%f",a);
    return 0;
}