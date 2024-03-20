using namespace std;
#include<iostream>
class cuboid
{
    public:
       float l,b,h;
       void setvalues(float l1,float b1,float h1)
       {
        l=l1;
        b=b1;
        h=h1;
       }
       void getvalues()
       {
        cout<<"length:"<<l<<endl;
        cout<<"breadth:"<<b<<endl;
        cout<<"height:"<<h<<endl;
       }
       inline float volume()
       {
        return l*b*h;
       }
       inline float surface_area()
       {
        return 2*((l*b)+(l*h)+(b*h));
       }
}ob;

int main()
{
    float l,b,h;
    cout<<"Enter length breadth height:";
    cin>>l>>b>>h;
    ob.setvalues(l,b,h);
    ob.getvalues();
    cout<<"volume:"<<ob.volume()<<endl;
    cout<<"surface area:"<<ob.surface_area()<<endl;
}