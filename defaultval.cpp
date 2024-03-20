#include<iostream>
using namespace std;
class worker
{
 public:
 char wname[20];
 int hours;
 int pay_rate;
 float sal;
  void accept()
  {
   cout<<"\n worker name:";
   cin>>wname;
   cout<<"no_of_hours_worked:";
   cin>>hours;
  }

  void cal(int pay_rate=400)
  {
   float sal=hours*pay_rate;
   cout<<"salary of worker="<<sal;
  }

  void disp()
  {
   cout<<"\n worker name="<<wname<<endl;
   cout<<"no of hourse worke="<<hours<<endl;
   cout<<"pay rate="<<pay_rate<<endl;
  }
}ob;

int main()
{
 ob.accept();
 ob.disp();
 ob.cal();
}