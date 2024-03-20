#include<iostream>
#include<string.h>
using namespace std;
class Worker
{
	public:
		char wname[20];
		int hr;
		float prate,sal;
		void accept(char wname1[20],int hr1,float prate1=50.0f)
		{
		  	strcpy(wname,wname1);
		  	hr=hr1;
		  	prate=prate1;
		}
		void calc()
		{
			sal=prate*hr;
		}
		void disp()
		{
			cout<<"\nWorker Name="<<wname;
			cout<<"\n Hours="<<hr;
			cout<<"\n Pay Rate="<<prate;
			cout<<"\nSalary="<<sal;
		}
};
int main()
{
	Worker ob,ob1;
   ob.accept("Om",10);
   ob.calc();
   ob.disp();
   ob1.accept("Sai",20,100.00f);
   ob1.calc();
   ob1.disp();	
}