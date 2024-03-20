#include<iostream>
using namespace std;
class time
{
    public:
      int hh,mm,ss;
      void accept()
      {
        cout<<"Enter hours:";
        cin>>hh;
        cout<<"Enter minutes:";
        cin>>mm;
        cout<<"Enter seconds:";
        cin>>ss;
      }
      void disp()
      {
        cout<<"Time="<<hh<<mm<<ss<<endl;
      }
      static void difference(time ob,time ob1)
      {
        int h,m,s;
        if(ob.hh>ob1.hh)
        {
            h=ob.hh-ob1.hh;
            m=ob.mm-ob1.hh;
            s=ob.ss-ob1.ss;
        }
      }
};
int main()
{
    time ob,ob1;
    ob.accept();
    ob1.accept();
    ob.disp();
    ob1.disp();
    time::difference(ob,ob1);
}