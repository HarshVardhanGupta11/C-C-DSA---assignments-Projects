#include<stdio.h>
int main()
{
    char ch1,ch2,ch3;
    printf("Enter three characters\n");
    scanf("%c %c %c",&ch1,&ch2,&ch3); //space,\n(new line/enter),\t(tab) all can be taken as delimiter
    printf("%c=%d %c=%d %c=%d",ch1,ch1,ch2,ch2,ch3,ch3);
    return 0;
}
