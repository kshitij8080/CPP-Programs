using namespace std;
#include<iostream>
class student
{
    public:
    int rno,m1,m2,m3,m4,m5,m6,t;
    char sname[20];
    float per;
    void accept()
    {
        cout<<"Enter student roll no name six subject marks:";
        cin>>rno>>sname>>m1>>m2>>m3>>m4>>m5>>m6;
    }
    void calculate()
    {
        t=m1+m2+m3+m4+m5+m6;
        per=t/6;
    }
    void disp()
    {
        cout<<" roll no:"<<rno<<endl;
        cout<<" name:"<<sname<<endl;
        cout<<" six sub marks:"<<m1<<"\t"<<m2<<"\t"<<m3<<"\t"<<m4<<"\t"<<m5<<"\t"<<m6<<"\t"<<endl;
        cout<<"percentage:"<<per<<endl;
    }
};
int main()
{
    student ob;
    ob.accept();
    ob.calculate();
    ob.disp();
}