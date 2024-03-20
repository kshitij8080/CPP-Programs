#include<iostream>
using namespace std;
class integer
{
    public:
      int a;
      void accept()
      {
          cout<<"Enter Number:";
          cin>>a;
      }
      void disp()
      {
          cout<<"\n Value of a:"<<a;
      }
      void operator --()
      {
         a--;
      }
};
int main()
{
    integer ob;
    ob.accept();
    ob.disp();
    ob.operator--();
    ob.disp();
    --ob;
    ob.disp();
}