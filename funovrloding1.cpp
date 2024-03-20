using namespace std;
#include<iostream>

void vol(int s)
{
    int v=s*s*s;
    cout<<"volume of cube="<<v<<endl;
}
void vol(float r,int h)
{
    int v=3.14*r*r*h;
    cout<<"volume of cylinder="<<v<<endl;
}
void vol(double b,double h)
{
    int v=b*h;
    cout<<"volume of triangle="<<v<<endl;
}
int main()
{
    vol(4);
    vol(3.3f,6);
    vol(4,4);
}