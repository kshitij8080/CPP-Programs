#include<iostream>
using namespace std;
class shape
{
    public:
    virtual void area()=0;
    virtual void volume()=0;
};
class rectangle:public shape
{
    public:
    float l,h,b;
    rectangle(float l,float h,float b)
    {
        this->l=l;
        this->b=b;
        this->h=h;
    }
    void area()
    {
        float a=l*h;
        cout<<"\n area of recangle="<<a;
    }
    void volume()
    {
        float v=l*b*h;
        cout<<"\n volume of rectangle="<<v;
    }
};
class circle:public shape
{
    public:
    float r;
    circle(float r)
    {
        this->r=r;
    }
    void area()
    {
        float a=3.14*r*r;
        cout<<"\n area of circle="<<a;
    }
    void volume()
    {
        cout<<"\n circle cannot have a volume :(";
    }
};
class cylinder:public shape
{
    public:
    float r,h;
    cylinder(float r,float h)
    {
        this->r=r;
        this->h=h;
    }
    void area()
    {
        float a=2*3.14*r*h=2*3.14*r*r;
        cout<<"\n area of cylinder="<<a;
    }
    void volume()
    {
        float v=3.14*r*r*h;
        cout<<"\n volume of cylinder="<<v;
    }
};

int main()
{
    circle ob(3.5);
    rectangle ob1(3.5,4.5,4.2);
    cylinder ob3(2.1,8.6);
    ob1.area();
    ob1.volume();
    ob.area();
    ob.volume();
    ob3.area();
    ob3.volume();
}