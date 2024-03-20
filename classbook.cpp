#include<iostream>
using namespace std;
class book
{
    public:
    int bid;
    char bname[20],bauthor[20],bpublication[20];
    void accept()
    {
        cout<<"book id:";
        cin>>bid;
        cout<<"book name:";
        cin>>bname;
        cout<<"book author:";
        cin>>bauthor;
        cout<<"book publication:";
        cin>>bpublication;        
    }
    void disp()
    {
        cout<<"\nbook id:"<<bid;
        cout<<"\nbook name:"<<bname;
        cout<<"\nbook author:"<<bauthor;
        cout<<"\nbook publication:"<<bpublication;
    }
}ob;

int main()
{
    ob.accept();
    ob.disp();
}