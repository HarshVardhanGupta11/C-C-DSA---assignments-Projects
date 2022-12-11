#include<stdio.h>
int main()
{
    int i,j,k,count=0,l=1;
    for(i=1;i<=4;i++)
    {
        count=0;
        for(j=1;j<=4;j++)
        {
            for(k=l;k<=10;k++)
            {
                if(j<=i && j>=1)
                {
                    count++;
                    if(count>i)
                        break;
                    else
                    {
                        printf("%d",l);
                        l++;
                    }
                }
            }
            if(count>i)
                break;
        }
        printf("\n");
    }
    return 0;
}