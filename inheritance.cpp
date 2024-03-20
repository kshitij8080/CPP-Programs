#include<iostream>
using namespace std;
class college
{
    public:
      int cno;
      char cname[20],add[20];
      void accept()
      {
          cout<<"Enter college no name add=";
          cin>>cno>>cname>>add;
      }
};
class student:public college
{
    public:
      int rno;
      char sname[20];
      float per;
      void accepts()
      {
          cout<<"enter rno sname per=";
          cin>>rno>>sname>>per;
      }
      void disp()
      {
          cout<<"\n college no="<<cno;
          cout<<"\n college name="<<cname;
          cout<<"\n college add="<<add;
          cout<<"\n roll no="<<rno;
          cout<<"\n student name="<<sname;
          cout<<"\n percentage="<<per;
      }
};

int main()
{
    student ob;
    ob.accept();
    ob.accepts();
    ob.disp();
}