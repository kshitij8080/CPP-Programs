using namespace std;
#include<iostream>
class person
{
    public:
    char pname[20],add[20];
    float sal,tax;
    void accept()
    {
        cout<<"Enter person name:";
        cin>>pname;
        cout<<"person address:";
        cin>>add;
        cout<<"enter salary:";
        cin>>sal;
    } 
    void calc()
    {
        if(sal<=20000)
          tax=0;
        else if(sal<=40000)
          tax=sal*5/100;
        else
          tax=sal*10/100;
    }
    void disp()
    {
        cout<<"person name:"<<pname<<endl;
        cout<<"person address:"<<add<<endl;
        cout<<"person salary:"<<sal<<endl;
        cout<<"person tax:"<<tax<<endl;
    }
};
int main()
{
    person ob;
    ob.accept();
    ob.calc();
    ob.disp();
}