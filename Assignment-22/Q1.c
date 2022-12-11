#include<stdio.h>
int len(char[]);
int main()
{
    char ch[30];
    int l;
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    l=len(ch);
    printf("\n%d",l);
    return 0;
}
int len(char ch[])
{
    int i;
    for(i=0;ch[i];i++);
    ch[i-1]='\0';
    for(i=0;ch[i];i++);
    return i;
}