#include<iostream>
using namespace std;
class Complex
{
    private:
        int r;
        int i;
    public:
        void set_data(int x,int y)
        {
            r=x;
            i=y;
        }
        void show_data()
        {
            cout<<"\nr="<<r<<" i="<<i;
        }
};
int main()
{
    Complex c;
    c.set_data(5,3);
    c.show_data();
    return 0;
}