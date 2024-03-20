#include<iostream>
using namespace std;

void volume(int r,int h)
{
    int a=3.14*r*r*h;
    cout<<"Volume of cylinder:"<<a;
}
void volume(float r,int h)
{
    int a=1/3*3.14*r*r*h;
    cout<<"volume of cone:"<<a;
}
void volume(float r)
{
    int a=4/3*3.14*r*r;
    cout<<"volume of sphere:"<<a;
}
int main()
{
    volume(12,8);
    volume(4.8f,8);
    volume(10.5);
}