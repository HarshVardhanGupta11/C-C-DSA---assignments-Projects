#include<stdio.h>
int main()
{
    float l,b,h,V;
    printf("Enter lenght,breadth and height of a cubiod");
    scanf("%f%f%f",&l,&b,&h);
    V=l*b*h;
    printf("Volume=%f",V);
    return 0;
}