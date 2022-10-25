#include<stdio.h>
int main()
{
    int a,b,c;
    float avg;
    printf("Enter three numbers\n");
    scanf("%d%d%d",&a,&b,&c);
    avg = (a+b+c)/3.0;
    printf("Avg=%f",avg);
    return 0;
}