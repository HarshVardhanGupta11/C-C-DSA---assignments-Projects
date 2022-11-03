#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    if(ch>='a' && ch<='z')
        printf("Chracter is in lower case\n");
    else if(ch>='A' && ch<='Z')
        printf("Character is in upper case\n");
    else
        printf("Character is not a alphabet\n");
    return 0;
}