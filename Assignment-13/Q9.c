#include<stdio.h>
int main()
{
    int ch;
    printf("Enter a character\n");
    scanf("%c",&ch);
    switch(ch)
    {
        case 'A':
        case 'a':
        case 'E':
        case 'e':
        case 'I':
        case 'i':
        case 'O':
        case 'o':
        case 'U':
        case 'u':
            printf("It is a vowel");
            break;
        case 'B' ... 'D':
        case 'F' ... 'H':
        case 'J' ... 'N':
        case 'P' ... 'T':
        case 'V' ... 'Z':
        case 'b' ... 'd':
        case 'f' ... 'h':
        case 'j' ... 'n':
        case 'p' ... 't':
        case 'v' ... 'z':
            printf("It is a consonent");
            break;
        default:
            printf("It is special character\n");
    }
    return 0;
}