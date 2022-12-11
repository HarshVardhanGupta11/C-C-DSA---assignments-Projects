#include<stdio.h>
int main()
{
    char ch[20];
    int i;
    printf("Enter a string\n");
    fgets(ch,20,stdin);
    for(i=0;ch[i];i++);
        ch[i-1]='\0';
    for(i=0;ch[i];i++);
        printf("Length of string is %d",i);
    return 0;
}