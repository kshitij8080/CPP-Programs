#include<iostream>
using namespace std;

inline int max(int a,int b)
{
    return (a>b?a:b);
}
inline int min(int a,int b)
{
    return (a<b?a:b);
}

int main()
{
    int a,b;
    cout<<"Enter any two nos:";
    cin>>a>>b;
    cout<<"maximun no="<<max(a,b)<<endl;
    cout<<"minimum no="<<min(a,b)<<endl;
}