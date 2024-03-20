using namespace std;
#include<iostream>
class Emp
{
    public:
    int eno;
    char ename[20];
    float sal;
    void accept()
    {
        cout<<"Enter Emp no name sal:";
        cin>>eno>>ename>>sal;
    }
    void disp()
    {
        cout<<"\n Emp number:"<<eno;
        cout<<"\n Emp name:"<<ename;
        cout<<"\n Emp salary:"<<sal<<"\n";
    }
};
int main()
{
    Emp ob;
    ob.accept();
    ob.disp();
}