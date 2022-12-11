#include<stdio.h>
int occ(char [],char);
int main()
{
    char ch[20],t;
    int i;
    printf("Enter a string\n");
    fgets(ch,20,stdin);
    printf("Enter a character\n");
    fflush(stdin);
    scanf("%c",&t);
    i=occ(ch,t);
    if(i==-1)
        printf("%d",i);
    else
        printf("First occurance of %c is at %d",t,i+1);
    return 0;
}
int occ(char ch[],char t)
{
    int i,j=0;
    for(i=0;ch[i];i++);
        ch[i-1]='\0';
    for(i=0;ch[i];i++)
    {
        if(ch[i]==t)
        {
            j++;
            return i;
        }
    }
    if(j==0)
    return -1;
}