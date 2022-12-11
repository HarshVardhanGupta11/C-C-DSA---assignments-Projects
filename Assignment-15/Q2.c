#include<stdio.h>
int HCF(int,int);
int main()
{
    int n1,n2,h;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    h=HCF(n1,n2);
    printf("HCF = %d",h);
    return 0;
}
int HCF(int n1,int n2)
{
    int H=1,i=2;
    while(n1>1)
    {
        if(n1%i==0 && n2%i==0)
        {
            n1=n1/i;
            n2=n2/i;
            H=H*i;
        }
        else
        {
            if(n1>i)
                i++;
            else
                break;
        }
    }
    return H;
}