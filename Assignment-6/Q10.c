#include<stdio.h>
int main()
{
    int m;
    printf("Enter the month number\n");
    scanf("%d",&m);
    if(m==1)
        printf("January");
    else if(m==2)
        printf("Feb");
    else if(m==3)
        printf("Mar");
    else if(m==4)
        printf("April");
    else if(m==5)
        printf("May");
    else if(m==6)
        printf("June");
    else if(m==7)
        printf("July");
    else if(m==8)
        printf("Aug");
    else if(m==9)
        printf("Sept");
    else if(m==10)
        printf("Oct");
    else if(m==11)
        printf("Nov");
    else
        printf("Dec");
    
}