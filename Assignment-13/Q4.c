#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op,a,b,c;
    printf("Enter three sides of a triangle\n");
    scanf("%d%d%d",&a,&b,&c);
    while(1)
    {
        printf("\nMenu\n");
        printf("\n\n1. Check wheather a given set of three numbers are lenghts of an isoceles triangle or not\n");
        printf("2. Check wheather a given set of three numbers are lenghts of an right triangle or not\n");
        printf("3. Check wheather a given set of three numbers are lenghts of an equilateral triangle or not\n");
        printf("4. Exit\n");
        printf("Enter the any option(1-4)\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                if(a==b || b==c || c==a)
                    printf("The triangle is an isoceles triangle\n");
                else    
                    printf("Triangle is not an isoceles triangle\n");
                break;
            case 2:
                if(c*c==a*a+b*b || a*a==b*b+c*c || b*b==c*c+a*a)
                    printf("The triangle is a right angled triangle\n");
                else
                    printf("The triangle is not right angled\n");
                    break;
            case 3:
                if(a+b==c*2)
                    printf("The triangle is equilateral triangle\n");
                else
                    printf("The triangle is not a equilateral triangle\n");
                break;
            case 4:
                exit(0);
        }     
    }
    return 0;

}