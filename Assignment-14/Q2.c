#include<stdio.h>
float simpleinterest(float,float,float);
int main()
{
    float p,r,t,SI;
    printf("Enter amount,rate and time\n");
    scanf("%f%f%f",&p,&r,&t);
    SI=simpleinterest(p,r,t);
    printf("Simple interest=%0.2f",SI);
    return 0;
}
float simpleinterest(float P,float R,float T)
{
    float si;
    si=(P*R*T)/100;
    return si;
}