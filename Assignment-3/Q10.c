#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    b-=a+=b-=a=-a;
    printf("%d %d",a,b);
    return 0;
}
