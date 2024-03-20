#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream f1,f2;
    int n,i,num;
    f1.open("even.txt",ios::out);
    f2.open("odd.txt",ios::out);
    cout<<"Enter Limit:";
    cin>>n;
    for(i=0;i<n;i++)
    {
        cout<<"Enter Number:";
        cin>>num;
        if(num%2==0)
          f1<<num<<endl;
        else
          f2<<num<<endl;
    }
    f1.close();
    f2.close();
}