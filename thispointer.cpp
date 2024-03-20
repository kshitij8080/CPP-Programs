#include<iostream>
#include<string.h>
using namespace std;
class emp
{
    public:
       int eno;
       char ename[20];
       float sal;
       void accept(int eno,char ename[20],float sal)
       {
         this->eno=eno;
         strcpy(this->ename,ename);
         this->sal=sal;
       }
       void disp()
       {
         cout<<"\n emp no:"<<eno;
         cout<<"\n emp name:"<<ename;
         cout<<"\n emp sal:"<<sal;
       }
}ob;

int main()
{
    ob.accept(101,"om",25000);
    ob.disp();
}