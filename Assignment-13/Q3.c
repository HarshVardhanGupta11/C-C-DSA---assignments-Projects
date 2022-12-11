#include<stdio.h>
int main()
{
    int week;
    printf("Enter the day number of a week\n");
    scanf("%d",&week);
    switch(week)
    {
        case 1:
            printf("Motivational Monday\n");
            break;
        case 2:
            printf("Transformational Tuesday\n");
            break;
        case 3:
            printf("Wonderful Wednesday\n");
            break;
        case 4:
            printf("Thoughtful Thursday\n");
            break;
        case 5:
            printf("Fab Friday\n");
            break;
        case 6:
            printf("Sensational Saturday\n");
            break;
        case 7:
            printf("Smart Sunaday\n");
            break;
        default:
            printf("Day number is wrong");
    }
    return 0;
}