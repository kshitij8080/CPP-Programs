#include<iostream>
#include<string.h>
using namespace std;
class String
{
    public:
      char s1[20];
      void accept()
      {
         cout<<"Enter String:";
         cin>>s1;
      }
      void disp()
      {
         cout<<"\n String="<<s1;
      }
      friend void operator ==(String &ob,String &ob1);
};
void operator ==(String &ob1,String &ob2)
{
    int k=strcmp(ob1.s1,ob2.s1);
      if(k==0)
        cout<<"\n String are Equal..";
      else
        cout<<"\n String are not Equal...";
}
int main()
{
    String ob1,ob2;
    ob1.accept();
    ob2.accept();

    ob1.disp();
    ob2.disp();

    ob1==ob2;
}