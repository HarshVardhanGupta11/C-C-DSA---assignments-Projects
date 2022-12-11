#include<stdio.h>
int main()
{
    int i;
    char org[10],dup[10];
    printf("Enter a string\n");
    fgets(org,10,stdin);
    for(i=0;org[i];i++)
        dup[i]=org[i];
    dup[i]='\0';
    printf("%s",dup);
    return 0;
}