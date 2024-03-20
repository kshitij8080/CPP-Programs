#include<iostream>
#include<string.h>
using namespace std;
class Emp
{
    public:
       int eno;
       char ename[20],designation[20];
       float sal;
       void accept(int eno,char ename[20],float sal,char dsignation[20])
       {
         this->eno=eno;
         strcpy(this->ename,ename);
         this->sal=sal;
         strcpy(this->designation,designation);
       }
       void disp()
       {
         cout<<"\n emp no:"<<eno;
         cout<<"\n emp name:"<<ename;
         cout<<"\n emp salary:"<<sal;
         cout<<"\n emp designation:"<<designation;
       }
}ob,ob1;

int main()
{
    ob.accept(101,"om",22000,"WORKER");
    ob1.accept(102,"sai",23000,"manager");
    if(ob.sal>ob1.sal)
      ob.disp();
    else
      ob1.disp();
}