#include<iostream>
using namespace std;
class Emp
{
    public:
      int eno;
      char ename[20];
      float sal;
      void accept();
      void disp();
};
void Emp::accept()
{
    cout<<"Emp no=";
    cin>>eno;
    cout<<"Emp name=";
    cin>>ename;
    cout<<"emp salary=";
    cin>>sal;
}
void Emp::disp()
{
    cout<<"\n emp no="<<eno;
    cout<<"\n emp name="<<ename;
    cout<<"\n emp salary="<<sal;
}

int main()
{
    Emp ob;
    ob.accept();
    ob.disp();
}