#include<stdio.h>
int main()
{
    int N,i,a=0,b=1,c,count=2;
    printf("Enter a number\n");
    scanf("%d",&N);
    printf("%d %d ",a,b);
    while(1)
    {
        c=a+b;
        count++;
        printf("%d ",c);
        a=b;
        b=c;
        if(count==N)
            break;
    }
    return 0;
}