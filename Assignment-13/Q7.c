#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op,n,fact=1,i,sum=0;
    float r,A;
    while(1)
    {
        printf("\n\t\t\t\tUser Menu\n\n");
        printf("1. Factorial of a number\n");
        printf("2. Check even or odd\n");
        printf("3. Area of a circle\n");
        printf("4. Sum of first N numbers\n");
        printf("5. Exit\n");
        printf("Enter the opertion option you want to choose\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("Enter a number\n");
                scanf("%d",&n);
                for(i=1;i<=n;i++)
                    fact=fact*i;
                printf("Factorial=%d",fact);
                break;
            case 2:
                printf("Enter a number\n");
                scanf("%d",&n);
                if(n%2)
                    printf("Odd number");
                else
                    printf("Even number\n");
                break;
            case 3:
                printf("Enter the radius of the circle\n");
                scanf("%f",&r);
                A=3.14*r*r;
                printf("Area of the circle is %f",A);
                break;
            case 4:
                printf("Enter the value of N\n");
                scanf("%d",&n);
                for(i=n;i>=1;i--)
                    sum=sum+i;
                printf("Sum = %d",sum);
                break;
            case 5:
                exit(0);  
            default:
                printf("Invalid choice\n");
        }
    }
    return 0;
}