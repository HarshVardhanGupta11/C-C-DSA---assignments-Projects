#include<stdio.h>
int main()
{
    int d,m,y;
    printf("Enter day month and year\n");
    scanf("%d/%d/%d",&d,&m,&y); //here / is the delimiter
    printf("Day - %d,Month - %d,Year - %d",d,m,y);
    return 0;
}
