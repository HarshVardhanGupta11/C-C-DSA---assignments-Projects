#include<iostream>
using namespace std;
class Date
{
    private:
        int d,m,y;
    public:
        void set_date(int a,int b,int c)
        {
            d=a;
            m=b;
            y=c;
        }
        void show_date()
        {
            cout<<endl<<"d="<<d<<", m="<<m<<", y="<<y;
        }
};
int main()
{
    Date d;
    d.set_date(31,12,2022);
    d.show_date();
    return 0;
}