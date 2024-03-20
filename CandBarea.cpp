using namespace std;
#include<iostream>
class Area
{
    public:
    void circle()
    {
        float r,a;
        cout<<"Enter radius:";
        cin>>r;
        a=3.14*r*r;
        cout<<"area of circle:"<<a<<endl;
    }
    void rect()
    {
        float l,w,a;
        cout<<"Enter length and width:";
        cin>>l>>w;
        a=l*w;
        cout<<"area of rectangle:"<<a<<endl; 
    }
    void triangle()
    {
        float b,h,a;
        cout<<"Enter base and height:";
        cin>>b>>h;
        a=0.5*b*h;
        cout<<"area of triangle:"<<a<<endl;
    }
};
int main()
{
    Area ob;
    ob.circle();
    ob.rect();
    ob.triangle();
}