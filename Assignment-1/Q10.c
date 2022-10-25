#include<stdio.h>
int main()
{
    int R;
    float A;
    printf("Enter radius of a circle\n");
    scanf("%d",&R);
    A=3.14*R*R;
    printf("Area of a circle is %f having the radius %d",A,R);
    return 0;
}