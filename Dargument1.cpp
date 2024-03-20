using namespace std;
#include<iostream>
void area(int r=12)
{
    int a=3.14*r*r;
    cout<<"area of circle="<<a<<endl;
}
void circum(float r=10.5f)
{
    int a=2*3.14*r;
    cout<<"area of circumfrence="<<a<<endl;
}

int main()
{
    area();
    area(10);
    circum();
    circum(22.4);
}