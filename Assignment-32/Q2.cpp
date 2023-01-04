#include<iostream>
using namespace std;
class Time
{
    private:
        int h,m,s;
    public:
        void set_data(int x,int y,int z)
        {
            h=x;
            m=y;
            s=z;
        }
        void display_data()
        {
            cout<<endl<<h<<" hr "<<m<<" min "<<s<<" sec ";
        }
};
int main()
{
    Time t;
    t.set_data(3,45,20);
    t.display_data();
    return 0;
}