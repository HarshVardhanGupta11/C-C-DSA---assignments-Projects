#include<stdio.h>
float circlearea(float);
int main()
{
    float area,r;
    printf("Enter the radius of the circle\n");
    scanf("%f",&r);
    area=circlearea(r);
    printf("Area of circle=%f",area);
    return 0;
}
float circlearea(float r)
{
    float A=3.14*r*r;
    return A;
}