#include<stdio.h>
int main()
{
    int h,m;
    printf("Enter hour and minute\n");
    scanf("%d:%d",&h,&m);  // : is the delimiter
    printf("%d hour and %d minute",h,m);
    return 0;
}
