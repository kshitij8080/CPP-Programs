using namespace std;
#include<iostream>

void area(int r,int l)
{
    int a=3.14*r*(r+l);
    cout<<"area of cone="<<a<<endl;
}
void area(float r)
{
    int a=4*3.14*r*r;
    cout<<"area of sphere="<<a<<endl;
}
void area(double r)
{
    int a=3.14*r*r;
    cout<<"area of circle="<<a<<endl;
}

int main()
{
    area(12,12);
    area(3.5f);
    area(7.5);
}