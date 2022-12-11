#include<stdio.h>
int main()
{
    char str[25];
    int i,j,k;
    printf("Enter a string\n");
    fgets(str,25,stdin);
    for(i=0;str[i];i++);
    for(j=i-1;j>=0;j--)
        printf("%c",str[j]);
    return 0;
}