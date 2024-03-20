#include<iostream>
using namespace std;
class add
{
   public:
   int a;
   void accept()
   {
      cout<<"enter value of a:";
      cin>>a;
   }
   void disp()
   {
      cout<<"\nvalue of a:"<<a;
   }
   void operator ++()
   {
     a++;
   }
};
int main()
{
  add ob;
  ob.accept();
  ob.disp();
  ob.operator++();
  ob.disp();
  
}