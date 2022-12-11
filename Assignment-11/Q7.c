#include<stdio.h>
int main()
{
    int i,j,k;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<=5;j++)
        {
            for(k='A';k<='Z';k++)
            {
                if(j>=i && j<=5)
                {
                    printf("%c",k);
                    j++;
                }
                else
                {
                    printf(" ");
                    break;
                }
            }
        }
        printf("\n");
    }
}