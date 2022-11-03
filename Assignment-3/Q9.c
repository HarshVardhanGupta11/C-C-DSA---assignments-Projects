#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    a+=b;
    b-=a;
    a+=b;
    b=-b;
    printf("%d %d",a,b);
    return 0;
}
