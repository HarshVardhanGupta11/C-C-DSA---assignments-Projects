#include<stdio.h>
void find(char [],char,int,int);
int main()
{
    char ch[30],c;
    int i,j;
    printf("Enter a string\n");
    fgets(ch,30,stdin);
    printf("Enter a character\n");
    fflush(stdin);
    scanf("%c",&c);
    printf("Enter the start indices and end indices in which you want to find the character\n");
    scanf("%d%d",&i,&j);
    find(ch,c,i,j);
    return 0;
}
void find(char ch[],char c,int i,int j)
{
    int k,l=0;
    for(k=i;k<=j;k++)
    {
        if(ch[k]==c)
        {
            l++;
            printf("The given character is present in the string\n");
            break;
        }
    }
    if(l==0)
       printf("The given character is not present in the string\n"); 
}
