#include<stdio.h>
int main()
{
    int N,a=0,b=1,c,count=2;
    printf("Enter a number\n");
    scanf("%d",&N);
    while(1)
    {
        c=a+b;
        count++;
        a=b;
        b=c;
        if(count==N)
            break;
    }
    printf("%d term of fibonacci series is %d",N,c);
    return 0;
}