#include<iostream>
using namespace std;
class Emp
{
    public:
      int eno;
      char ename[20];
      float sal;

      Emp()
      {
        cout<<"Enter Emp no name sal=";
        cin>>eno>>ename>>sal;
      }
      void disp()
      {
        cout<<"Emp no:"<<eno<<endl;
        cout<<"Emp name:"<<ename<<endl;
        cout<<"Emp salary:"<<sal<<endl;
      }
};

int main()
{
    Emp ob;
    ob.disp();
}