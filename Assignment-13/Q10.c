#include<stdio.h>
#include<stdlib.h>
int main()
{
    int op,n1,n2,l,b,h,i,count=0,LCM=1;
    while(1)
    {
        printf("\n\t\t\t\tUser Menu\n\n");
        printf("1. Calculate LCM of two numbers\n");
        printf("2. Calculate sum of digits of two numbers\n");
        printf("3. Volumn of a cuboid\n");
        printf("4. Check wheather the number is prime or not\n");
        printf("5. Exit\n");
        printf("Enter the opertion option you want to choose\n");
        scanf("%d",&op);
        switch(op)
        {
            case 1:
                printf("Enter two numbers\n");
                scanf("%d%d",&n1,&n2);
                
                break;
            case 2:
                printf("Enter two number\n");
                scanf("%d%d",&n1,&n2);
                printf("Sum=%d",n1+n2);
                break;
            case 3:
                printf("Enter l,b,h of a cubiod\n");
                scanf("%d%d%d",&l,&b,&h);
                printf("Volume=%d",l*b*h);
                break;
            case 4:
                printf("Enter a number\n");
                scanf("%d",n1);
                for(i=2;i<n1;i++)
                {
                    if(n1%i==0)
                    {
                        printf("Not prime\n");
                        break;
                    }
                }
                if(i==n1)
                    printf("Prime\n");
                break;
            case 5:
                exit(0);
            default:
                printf("Wrong choice\n");
        }
    }
}