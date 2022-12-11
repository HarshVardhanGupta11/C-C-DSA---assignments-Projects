#include<stdio.h>
void isAlpha(char[]);
int main()
{
    char ch[30];
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    isAlpha(ch);
    return 0;
}
void isAlpha(char ch[])
{
    int i,d=0,a=0;
    for(i=0;ch[i];i++)
    {
        if(ch[i]>='0' && ch[i]<='9')
            d++;
        else if((ch[i]>='a' && ch[i]<='z')||(ch[i]>='A' && ch[i]<='Z'))
            a++;
    }
    if(d>=1 && a>=1)
        printf("The string is alphanumeric\n");
    else
        printf("The string is not alphanumeric\n");
}