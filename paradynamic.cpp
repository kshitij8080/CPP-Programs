#include<iostream>
#include<string.h>
using namespace std;
class student
{
    public:
      int rno,n,*m,i,p,s;
      char sname[20];
      student(int rno,char sname[20],int n)
      {
          this->rno=rno;
          strcpy(this->sname,sname);
          this->n=n;
          m=new int[n];
          cout<<"\n Enter marks=";
          for(i=0;i<n;i++)
            cin>>m[i];
      }

      void disp()
      {
          for(i=0;i<n;i++)
            s=s+m[i];
            p=s/n;
            cout<<"\n Roll no="<<rno;
            cout<<"\n student name="<<sname;
            cout<<"\nPercentage="<<p;
            if(p>=90)
              cout<<"\n Grade=O";
            else if(p>=60)
              cout<<"\n Grade=A";
            else if(p>=50)
              cout<<"\n Grade=B";
            else if(p>=40)
              cout<<"\n Grade=C";
            else  cout<<"\n FAIL......";
      }
};

int main()
{
    student ob(101,"SHUBHAM",4);
    ob.disp();
}