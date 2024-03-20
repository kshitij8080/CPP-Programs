#include<iostream>
using namespace std;

inline int area(float r)
{
    return 3.14*r*r;
}
inline int circum(float r)
{
    return 2*3.14*r;
}

int main()
{
    float r;
    cout<<"enter radius:";
    cin>>r;
    cout<<"\n area of circle:"<<area(r);
    cout<<"\n area of circumfrence:"<<circum(r);
}