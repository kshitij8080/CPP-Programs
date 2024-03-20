#include<iostream>
using namespace std;
class internal
{
    public:
      int m1[5];
      void acceptint()
      {
          cout<<"Enter internal marks out of 30:";
          for(int i=0;i<5;i++)
            cin>>m1[i];
      }
};
class external
{
    public:
      int m2[5];
      void acceptext()
      {
        cout<<"Enter external marks out of 70:";
        for(int i=0;i<5;i++)
          cin>>m2[i];
      }
};
class practical
{
    public:
      int p;
      void acceptpra()
      {
          cout<<"Enter practical marks out of 100:";
          cin>>p;
      }
};
class result:public internal,public external,public practical
{
    public:
      int t;
      float per;
      void calc()
      {
          t=0;
          for(int i=0;i<5;i++)
          {
              t=t+m1[i]+m2[i];
          }
          t=t/p;
          per=(float)t/6;
      }
      void disp()
      {
          cout<<"\n Total marks:"<<t;
          cout<<"\n Percentage:"<<per;
      }
};

int main()
{
    result ob;
    ob.acceptint();
    ob.acceptext();
    ob.acceptpra();
    ob.calc();
    ob.disp();
}