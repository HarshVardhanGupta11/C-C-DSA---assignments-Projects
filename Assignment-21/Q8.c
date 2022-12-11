#include<stdio.h>
int main()
{
    int i,alpha=0,digit=0,special=0;
    char str[30];
    printf("Enter a string\n");
    fgets(str,30,stdin);
    for(i=0;str[i];i++);
        str[i-1]='\0';
    for(i=0;str[i];i++)
    {
        if((str[i]>='A' && str[i]<='Z') || (str[i]>='a' && str[i]<='z'))
            alpha++;
        else if(str[i]>='0' && str[i]<='9')
            digit++;
        else
            special++;
    }
    printf("\nNo of alphabat %d",alpha);
    printf("\nNo of digits %d",digit);
    printf("\nNo of special characters %d",special);
    return 0;
}