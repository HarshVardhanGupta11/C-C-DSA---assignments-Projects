#include<stdio.h>
void rev(char[]);
int main()
{
    char ch[30];
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    rev(ch);
    return 0;
}
void rev(char ch[])
{
    int i,j;
    for(i=0;ch[i];i++);
        ch[i-1]='\0';
    for(i=0;ch[i];i++);
    for(j=i-1;j>=0;j--)
        printf("%c",ch[j]);
}