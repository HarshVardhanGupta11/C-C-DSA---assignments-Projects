#include<stdio.h>
void upper(char []);
int main()
{
    char ch[30];
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    upper(ch);
    return 0;
}
void upper(char ch[])
{
    int i;
    for(i=0;ch[i];i++);
        ch[i]='\0';
    for(i=0;ch[i];i++)
    {
        if(ch[i]>='a' && ch[i]<='z')
            ch[i]=ch[i]-32;
    }
    printf("%s",ch);
}