#include<iostream>
using namespace std;
class Ebill
{
    public:
    char cname[20];
    int meterid,unit;
    float total;
    void accept()
    {
        cout<<"Enter customer no:";
        cin>>cname;
        cout<<"Enter meter id:";
        cin>>meterid;
        cout<<"enter unit:";
        cin>>unit;
    }
    void calc()
    {
        if(unit<=100)
        {
            total=unit*1;
        }
        else
        {
            if(unit>100&&unit<=200)
            {
                total=100*1;
                unit=unit-100;
                total=total+unit*2;
            }
            else
            {
                total=100*1;
                unit=unit-100;
                total=total+(100*2);
                unit=unit-100;
                total=total+unit*5;
            }
        }
    }
    void disp()
        {
            cout<<"\n customer name="<<cname;
            cout<<"\n meter id="<<meterid;
            cout<<"\n Units="<<unit;
            cout<<"\ntotal bill amount="<<total;
        }
        
    
}ob;

int main()
{
    ob.accept();
    ob.calc();
    ob.disp();
}