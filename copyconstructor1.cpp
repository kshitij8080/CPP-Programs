#include<iostream>
using namespace std;
class mypoint
{
    public:
      int x,y;
      mypoint()
      {
         cout<<"X and Y";
         cin>>x>>y;
      }
      mypoint(int x,int y)
      {
         this->x=x;
         this->y=y;
      }
      mypoint(mypoint &ob)
      {
         x=ob.x;
         y=ob.y;
      }
      void disp()
      {
         cout<<"X="<<x<<endl<<"Y="<<y<<endl;
      }
};

int main()
{
    mypoint ob;
    mypoint ob1(ob);
    mypoint ob2(100,200);
    mypoint ob3(ob1);

    ob2.disp();
    ob3.disp();
}