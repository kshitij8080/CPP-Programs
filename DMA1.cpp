#include<iostream>
using namespace std;
class MyArray
{
    public:
    int *a,i,n;
    MyArray(int n)
    {
        this->n=n;
        a=new int[n];
        cout<<"Enter N numbers:";
        for(i=0;i<n;i++)
          cin>>a[i];
    }
    void disp()
    {
        cout<<"Even NOS:";
        for(i=0;i<n;i++)
          if(a[i]%2==0)
          cout<<a[i]<<" ";
          cout<<endl;
        cout<<"Odd NOS:";
        for(i=0;i<n;i++)
          if(a[i]%2==1)
          cout<<a[i]<<" ";
    }
};

int main()
{
    MyArray ob(5);
    ob.disp();
}