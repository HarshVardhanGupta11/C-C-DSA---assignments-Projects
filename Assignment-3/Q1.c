#include<stdio.h>
int main()
/* In this program we directly put the value of character constant 
 and we get 4, it means jab store hota hai variable mein to char
 ban jata hai*/
{
    int x;
    x=sizeof('A');
    printf("Size of character constant=%d",x);
    return 0;
}
/* In this program we take character input from user and output 
   we get is 1 
{
    int x;
    char ch;
    printf("Enter a character constant\n");
    scanf("%c",&ch);
    x=sizeof(ch);
    printf("Size of character constant %c=%d",ch,x);
    return 0;
}*/