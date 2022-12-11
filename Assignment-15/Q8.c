#include<stdio.h>
int combination(int,int);
int main()
{
    int n,r,k,c,i=0;
    for(n=0;n<=5;n++)
    {
        k=1;
        i=0;
        for(r=0;r<=10;r++)
        {
            if(r>=5-n && r<=n+5 && k)
            {
                if(n>=i)
                {
                    c=combination(n,i);
                    i++;
                    printf("%d",c);
                    k=0;
                }
                else
                    break;
            }
            else
            {
                printf(" ");
                k=1;
            }
        }
        printf("\n");
    }
    return 0;
}
int combination(int n,int r)
{
    {
    int i,fact1=1,fact2=1,fact3=1,C;
    for(i=n;i>=1;i--)
        fact1=fact1*i;
    for(i=r;i>=1;i--)
        fact2=fact2*i;
    for(i=(n-r);i>=1;i--)
        fact3=fact3*i;
    C=(fact1)/(fact2*fact3);
    return C;
}
}