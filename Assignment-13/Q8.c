#include<stdio.h>
int main()
{
    char ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A' ... 'Z':
            printf("It is a upper case alphabat\n");
            break;
        case 'a' ... 'z':
            printf("It is a lower case alphabat\n");
            break;
        default:
            printf("It is a special charcter\n");
    }
    return 0;
}