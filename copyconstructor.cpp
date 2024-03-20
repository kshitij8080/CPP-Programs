#include<iostream>
using namespace std;
class Add
{
    public:
      int a,b;
      Add()
      {
         cout<<"Enter two nos=";
         cin>>a>>b;
      }
      Add(Add &ob)
      {
         int c=ob.a+ob.b;
         cout<<"Addition="<<c;
      }
};

int main()
{
    Add ob;
    Add ob1(ob);
}