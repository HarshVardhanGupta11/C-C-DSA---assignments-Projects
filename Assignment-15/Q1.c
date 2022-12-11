#include<stdio.h>
int LCM(int,int);
int main()
{
    int n1,n2,l;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    l=LCM(n1,n2);
    printf("LCM = %d",l);
    return 0;
}
int LCM(int n1,int n2)
{
    int LCM=1,i;
    for(i=2;n2>1;)
    {
        
        if(n1%i==0 && n2%i==0)
        {
            n1=n1/i;
            n2=n2/i;
            LCM=LCM*i;
        }
        else if(n1%i==0)
        {
            n1=n1/i;
            LCM=LCM*i;
        }
        else if(n2%i==0)
        {
            n2=n2/i;
            LCM=LCM*i;
        }
        else
            i++;
    }
    return LCM;
}