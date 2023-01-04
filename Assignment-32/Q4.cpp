#include<iostream>
#include<string.h>
using namespace std;
class Date
{
    private:
        int d,y;
        char m[20];
    public:
        void set_date(int a,char *b,int c)
        {
            d=a;
            strcpy(m,b);
            y=c;
        }
        void show_date()
        {
            cout<<endl<<d<<"-"<<m<<"-"<<y;
        }
};
int main()
{
    Date d;
    char mon[20]="Jan";
    d.set_date(11,mon,2023);
    d.show_date();
    return 0;
}