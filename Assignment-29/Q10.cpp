#include<iostream>
using namespace std;
int main()
{
    int ar[10],i,sum=0;
    cout<<"Enter 10 numbers\n";
    for(i=0;i<=9;i++)
        cin>>ar[i];
    for(i=0;i<=9;i++)
        sum=sum+ar[i];
    
    cout<<"Sum= "<<sum;
    return 0;
}