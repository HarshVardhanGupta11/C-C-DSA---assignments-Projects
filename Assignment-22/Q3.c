#include<stdio.h>
int cmp(char[],char[]);
int main()
{
    char ch1[30],ch2[30];
    int f;
    printf("Enter a string\n");
    fgets(ch1,30,stdin);
    printf("Enter another string\n");
    fflush(stdin);
    fgets(ch2,30,stdin);
    f=cmp(ch1,ch2);
    printf("%d ",f);
    return 0;
}
int cmp(char ch1[],char ch2[])
{
    int i;
    for(i=0;ch2[i];i++)
    {
        if(ch1[i]<ch2[i])
            return -1;
        else if(ch1[i]>ch2[i])
            return 1;
        else
            return 0; 
    }
}