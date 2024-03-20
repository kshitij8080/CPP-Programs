#include<iostream>
#include<string.h>
using namespace std;
class mystring
{
    public:
      char *s1;
      void accept()
      {
          s1=new char(20);
          cout<<"Enter String:";
          cin>>s1;
      }
      void disp()
      {
          cout<<"\n String:"<<s1;
      }
      void operator +(mystring &ob1)
      {
          strcat(s1,ob1.s1);
          cout<<"\n concat string="<<s1;
      }
      void operator !=(mystring &ob1)
      {
          int k=strcmp(s1,ob1.s1);
          if(k!=0)
          cout<<"\n String are not same..";
          else
          cout<<"\n String are same..";
      }
      void operator <(mystring &ob1)
      {
          int a=strlen(s1);
          int b=strlen(ob1.s1);
          if(a<b)
          cout<<"\n String 1 is less="<<s1;
          else
          cout<<"\n string 2 is less="<<ob1.s1;
      }
};
int main()
{
    mystring ob,ob1;
    ob.accept();
    ob1.accept();
    ob.disp();
    ob1.disp();
    ob!=ob1;
    ob<ob1;
    ob+ob1;
}