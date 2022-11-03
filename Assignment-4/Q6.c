#include<stdio.h>
int main()
{
    float INR,USD;
    printf("Enter amount in INR\n");
    scanf("%f",&INR);
    USD=INR/84.23;
    printf("Amount in USD = %0.2f",USD);
    return 0;
}