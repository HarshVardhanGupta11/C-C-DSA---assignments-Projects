#include<stdio.h>
int main()
{
    int i,j,k,l;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            for(k='A';k<='E';k++)
            {
                if(j<i)
                {
                    printf(" ");
                    break;
                }
                else
                {
                    l=k+i;
                    if(l<='E')
                        printf("%c",l);
                }
            }
            if(k=='F')
                break;
        }
        printf("\n");
    }
    return 0;
}