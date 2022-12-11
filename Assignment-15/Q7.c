#include<stdio.h>
void fibo(int);
int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    fibo(n);
    return 0;
}
void fibo(int N)
{
    int i=0,j=1,k,count=2;
    printf("%d %d",i,j);
    while(1)
    {
        k=i+j;
        printf(" %d",k);
        count++;
        i=j;
        j=k;
        if(count==N)
            break;
    }
}