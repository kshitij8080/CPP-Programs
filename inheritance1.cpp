#include<iostream>
using namespace std;
class book
{
    public:
      int bcode;
      char author[20];
      void accept()
      {
          cout<<"Enter book code and author:";
          cin>>bcode>>author;
      }
};
class book1:public book
{
    public:
    int bno;
    char bname[20];
    float price;
    void accepts()
    {
        cout<<"Enter book no name price:";
        cin>>bno>>bname>>price;
    }
    void disp()
    {
        cout<<"\n book code:"<<bcode;
        cout<<"\n book author:"<<author;
        cout<<"\n book no:"<<bno;
        cout<<"\n book name:"<<bname;
        cout<<"\n book price:"<<price;
    }
};

int main()
{
    book1 ob;
    ob.accept();
    ob.accepts();
    ob.disp();
}
