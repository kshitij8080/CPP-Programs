#include<iostream>
using namespace std;
int main()
{
    int i,n;
    cout<<"\n Enter limit:";
    cin>>n;
    int *a=new int[n];

    cout<<"\n Enter n numbers:\n";
    for(i=0;i<n;i++)
    cin>>a[i];
    cout<<"\n reverse Array:\n ";
    for(i=n-1;i>=0;i--)
    cout<<a[i]<<endl;
}