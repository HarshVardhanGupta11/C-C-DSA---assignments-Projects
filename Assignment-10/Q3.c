#include<stdio.h>
int main()
{
    int N,a=0,b=1,c=1;
    printf("Enter a number\n");
    scanf("%d",&N);
    if(N==0 || N==1)
        printf("Number is there in fibonacci series\n");
    while(c<N)
    {
        c=a+b;
        if(c==N)
        {
            printf("Number is there in fibonacci series\n");
            break;
        }
        a=b;
        b=c;
    }
    if(c>N)
        printf("Number is not there in fibonacci series\n");
    return 0; 
}