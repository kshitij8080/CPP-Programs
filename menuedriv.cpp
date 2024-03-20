#include<iostream>
using namespace std;
int n;
class Employee
{
   public:
   int eno;
   char ename[20];
   float sal;
   void accepte()
   {
	 cout<<"\nEnter Employee code:";
	 cin>>eno;
	 cout<<"\nEnter Employee Name:";
	 cin>>ename;
   }
};
class Fulltime:public Employee
{
   public:
   int daily_wages,no_of_days;
   void acceptf()
   {
      cout<<"\nEnter Daily Wages:";
      cin>>daily_wages;
      cout<<"\nEnter Number of Days:";
      cin>>no_of_days;
   }
   void calculate()
   {
      sal=daily_wages*no_of_days;
   }
   void disp()
   {
      cout<<"\nEmployee No:"<<eno;
      cout<<"\nEmployee Name:"<<ename;
      cout<<"\nNumber of Days Worked:"<<no_of_days;
      cout<<"\nDaily Wages:"<<daily_wages;
      cout<<"\nEmployee sal:"<<sal;
   }

};
class Parttime:public Employee
{
   public:
   int no_of_hours,hourly_wages;
   void acceptp()
   {
      cout<<"\nEnter Number of Hours:";
      cin>>no_of_hours;
      cout<<"\nEnter Hourly Wages:";
      cin>>hourly_wages;
   }
   void calculate()
   {
      sal=hourly_wages*no_of_hours;
   }
   void disp()
   {
      cout<<"\nEmployee No:"<<eno;
      cout<<"\nEmployee Name:"<<ename;
      cout<<"\nNumber of Hours Worked:"<<no_of_hours;
      cout<<"\nHourly Wages:"<<hourly_wages;
      cout<<"\nEmployee sal:"<<sal;
   }
};
void main()
{
   int ch,i,index1,index2;
   Fulltime ob1[100];
   Parttime ob2[100];
   float max1,max2;
   cout<<"\nEnter limit:";
   cin>>n;
   do
   {
      cout<<"\n1-accept & calculate \n2-Display All \n3-Display Employee info who's salary is max  \n4-Exit";
      cout<<"\nEnter your choice:";
      cin>>ch;
      switch(ch)
      {
	 case 1:for(i=0;i<n;i++)
		{
		  ob1[i].accepte();
                  ob1[i].acceptf();
                  ob1[i].calculate();
                }
                for(i=0;i<n;i++)
		{
		  ob2[i].accepte();
                  ob2[i].acceptp();
                  ob2[i].calculate();
                }
                break;
         case 2:for(i=0;i<n;i++)
                {
                  ob1[i].disp();
                  ob2[i].disp();
                }
                break;
         case 3:max1=ob1[0].sal;
                index1=0;
                max2=ob2[0].sal;
                index2=0;
                for(i=0;i<n;i++)
                {
                  if(ob1[i].sal>max1)
                  {
                     max1=ob1[i].sal;
                     index1=i;
                  }
                  if(ob2[i].sal>max2)
                  {
                     max2=ob2[i].sal;
                     index2=i;
                  }
                }
                ob1[index1].disp();
                ob2[index2].disp();
                break;
      }
   }while(ch<4);         

}