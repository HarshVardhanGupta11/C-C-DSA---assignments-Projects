#include<stdio.h>
int main()
{
    int n1,n2,i=2,LCM=1;
    printf("Enter two numbers\n");
    scanf("%d%d",&n1,&n2);
    while(n1>1 || n2>1)
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
        {
            if(n2>=i)
                i++;
            else
                break;
        }
    }
    printf("LCM=%d",LCM);
    return 0;
}