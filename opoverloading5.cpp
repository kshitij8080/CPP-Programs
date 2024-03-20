#include<iostream>
using namespace std;
class date
{
    public:
    int dd,mm,yy;
    void operator >>(date &ob)
    {
        cout<<"Enter dd mm yy:";
        cin>>dd>>mm>>yy;
    }
    void operator <<(date &ob)
    {
        cout<<"\n Date="<<dd<<"/"<<mm<<"/"<<yy;
    }
};
int main()
{
    date ob;
    ob>>ob;
    ob<<ob;
}