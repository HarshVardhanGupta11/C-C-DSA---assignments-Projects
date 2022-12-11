#include<stdio.h>
int HCF(int,int);
int main()
{
    int a,b,H;
    printf("Enter two numbers\n");
    scanf("%d%d",&a,&b);
    H=HCF(a,b);
    printf("HCF = %d",H);
    return 0;
}
int HCF(int a,int b)
{
    int i=2,H=1;
    while(i)
    {
        if(b>1)
        {
            if(a%i==0 && b%i==0)
            {
                H=i*HCF(a/i,b/i);
                return H;
            }
            else if(a%i==0)
                a=a/i;
            else if(b%i==0)
                b=b/i;
            else
                i++;
        }
        else
            return H;
    }

}