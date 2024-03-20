#include<iostream>
using namespace std;
class student
{
    public:
      int rno;
      char sname[20];
      float per;
      void accept();
      void disp();
};
void student::accept()
{
    cout<<"roll no=";
    cin>>rno;
    cout<<"student name=";
    cin>>sname;
    cout<<"student percentage=";
    cin>>per;
}
void student::disp()
{
    cout<<"\n roll no="<<rno;
    cout<<"\n student name="<<sname;
    cout<<"\n student salary="<<per;
}

int main()
{
    student ob;
    ob.accept();
    ob.disp();
}