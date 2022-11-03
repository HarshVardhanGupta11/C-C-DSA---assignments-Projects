#include<stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5;
    printf("Enter the marks of five subjects\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    if(sub1>=33 && sub1<=100)
    {
        if(sub2>=33 && sub2<=100)
        {
            if(sub3>=33 && sub3<=100)
            {
                if(sub4>=33 && sub4<=100)
                {
                    if(sub5>=33 && sub5<=100)
                        printf("Student passed");
                }
            }
        }
    }
    else
        printf("Student failed");
    return 0;
}