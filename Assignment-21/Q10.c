#include<stdio.h>
int main()
{
    char ch[20],t;
    int i;
    printf("Enter a string\n");
    fgets(ch,20,stdin);
    printf("Enter a character\n");
    fflush(stdin);
    scanf("%c",&t);
    for(i=0;ch[i];i++)
    {
        if(ch[i]==t)
            break;
    }
    printf("First occurance of %c is at %d",t,i+1);
    return 0;
}