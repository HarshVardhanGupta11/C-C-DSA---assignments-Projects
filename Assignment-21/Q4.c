#include<stdio.h>
int main()
{
    char ch[30];
    int c=0,i;
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    for(i=0;ch[i];i++);
        ch[i-1]='\0';
    for(i=0;ch[i];i++)
    {
        if(ch[i]==' ')
        c++;
    }
    printf("Number of spaces in the string=%d",c);
    return 0;
}