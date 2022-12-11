#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op,a,b;
    while(1)
    {
        printf("\n\t\t\t\tUser Menu\n\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Exit\n");
        printf("Enter the opertion option you want to choose\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("Enter two numbers\n");
                scanf("%d%d",&a,&b);
                printf("Sum=%d",a+b);
                break;
            case 2:
                printf("Enter two numbers\n");
                scanf("%d%d",&a,&b);
                printf("Difference=%d",a-b);
                break;
            case 3:
                printf("Enter two numbers\n");
                scanf("%d%d",&a,&b);
                printf("Product=%d",a*b);
                break;
            case 4:
                printf("Enter two numbers\n");
                scanf("%d%d",&a,&b);
                printf("Divide=%d",a/b);
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong option\n");
        }
    }
    return 0;
}