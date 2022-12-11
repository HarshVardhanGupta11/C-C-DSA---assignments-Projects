#include<stdio.h>
void swap(char[],int,int);
int main()
{
    char ch[30];
    int i,j;
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    printf("The enter start and end indices whose value need to be swapped\n");
    scanf("%d%d",&i,&j);
    swap(ch,i,j);
    return 0;
}
void swap(char ch[],int i,int j)
{
    char dup;
    dup=ch[i];
    ch[i]=ch[j];
    ch[j]=dup;
    printf("%s",ch);
}