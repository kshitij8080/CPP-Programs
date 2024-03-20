#include<iostream>
using namespace std;
class product
{
    public:
      int pid,cnt;
      char pname[20];
      float qty,price;
       void accept()
      {
        cout<<"Product id:";
        cin>>pid;
        cout<<"product name:";
        cin>>pname;
        cout<<"quantity:";
        cin>>qty;
        cout<<"product price:";
        cin>>price;
        static int cnt1;
        cnt1++;
        cnt=cnt1;
      }
      void disp()
      {
        cout<<"product id:"<<pid<<endl;
        cout<<"product name:"<<pname<<endl;
        cout<<"product quantity:"<<qty<<endl;
        cout<<"product price:"<<price<<endl;
        cout<<"product count="<<cnt<<endl;
      }
}ob,ob1;

int main()
{
    ob.accept();
    ob1.accept();
    ob.disp();
    ob1.disp();
}