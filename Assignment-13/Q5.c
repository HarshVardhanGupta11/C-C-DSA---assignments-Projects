#include<stdio.h>
int main()
{
    int var;
    printf("Enter the value of var\n");
    scanf("%d",&var);
    switch(var)
    {
        case 1:
            printf("good\n");
            break;
        case 2:
            printf("better\n");
            break;
        case 3:
            printf("best\n");
            break;
        case 4:
            printf("invalid\n");
            break;
        default:
            printf("Wrong choice\n");
    }
    return 0;
}