#include<stdio.h>
int main()
{
    int num,i;
    printf("Enter a number\n");
    scanf("%d",&num);
    for(i=num/2;i>1;i--)
    {
        if(num%i==0)
            break;
    }
    if(i==1)
        printf("%d is a prime number",num);
    else
        printf("%d is not a prime number",num);
    return 0;
}