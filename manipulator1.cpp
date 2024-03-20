#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    double a=4.512,b=5.51,c=11.211;
    cout<<setprecision(3);
    cout<<setfill('*');
    cout<<endl<<"Value:"<<setw(10)<<a;
    cout<<endl<<"Value:"<<setw(10)<<b;
    cout<<endl<<"Value:"<<setw(10)<<c;
}




