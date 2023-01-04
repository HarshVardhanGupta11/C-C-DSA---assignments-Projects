#include<iostream>
using namespace std;
class Circle
{
    private:
        float r;
    public:
        void setRadius(float x)
        {
            r=x;
        }
        float getRadius()
        {
            return r;
        }
        float area()
        {
            return(3.14*r*r);
        }
        float circumference()
        {
            return(2*3.14*r);
        }
};
int main()
{
    Circle c;
    c.setRadius(3.5);
    cout<<"Radius = "<<c.getRadius()<<endl;
    cout<<"Area = "<<c.area()<<endl;
    cout<<"Circumference = "<<c.circumference();
}