#include<stdio.h>
int vowel(char []);
int main()
{
    char ch[30];
    int c=0,i;
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    i=vowel(ch);
    printf("Number of vowels in the string=%d",i);
    return 0;
}
int vowel(char ch[])
{
    int i,c=0;
    for(i=0;ch[i];i++);
        ch[i-1]='\0';
    for(i=0;ch[i];i++)
    {
        if(ch[i]=='A' || ch[i]=='E' || ch[i]=='I' || ch[i]=='O' || ch[i]=='U' || ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' || ch[i]=='u')
        c++;
    }
    return c;
}