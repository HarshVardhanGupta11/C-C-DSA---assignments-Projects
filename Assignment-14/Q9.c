#include<stdio.h>
void digit(int,int);
int main()
{
    int a,num;
    printf("Enter a numnber\n");
    scanf("%d",&num);
    printf("Enter a digit\n");
    scanf("%d",&a);
    digit(num,a);
    return 0;
}
void digit(int num,int a)
{
    int i;
    while(num)
    {
        i=num%10;
        if(a==i){
            printf("Digit is in number\n");
            break;
        }
        num=num/10;
    }
    if(num==0)
        printf("Digit is not in the number\n");
}