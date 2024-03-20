#include<iostream>
using namespace std;

inline int square(int n)
{
    return n*n;
}
inline int cube(int n)
{
    return n*n*n;
}

int main()
{
    int n;
    cout<<"Enter number:";
    cin>>n;
    cout<<"\n square :"<<square(n);
    cout<<"\n cube :"<<cube(n);
}