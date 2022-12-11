#include<stdio.h>
int main()
{
    char ch[30];
    int c=0,i;
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    for(i=0;ch[i];i++)
    {
        if((ch[i]>='A' && ch[i]<='Z'))
            ch[i]=ch[i]+32;
    }
        printf("%s",ch);
    return 0;
}