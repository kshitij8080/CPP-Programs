#include<iostream>
using namespace std;
class student
{
    public:
      int rno;
      char sname[20];
      float per;

      student()
      {
        cout<<"Enter student roll no:";
        cin>>rno;
        cout<<"Ener student name:";
        cin>>sname;
        cout<<"Enter student percentage:";
        cin>>per;
      }
      void disp()
      {
        cout<<"student roll no:"<<rno;
        cout<<"student name:"<<sname;
        cout<<"student percentage:"<<per;
      }
}ob;

int main()
{
    
}