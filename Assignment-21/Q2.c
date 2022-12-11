#include<stdio.h>
int main()
{
    char str[30],ch;
    int i,c=0;
    printf("Enter a string\n");
    fgets(str,30,stdin);
    printf("Enter a character\n");
    fflush(stdin);
    scanf("%c",&ch);
    for(i=0;str[i];i++);
        str[i-1]='\0';
    for(i=0;str[i];i++)
    {
        if(str[i]==ch)
            c++;
    }
    printf("Number of occurance of %c in string is %d",ch,c);
    return 0;
}