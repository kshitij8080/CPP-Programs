using namespace std;
#include<iostream>
int main()
{
    int n,a[10],i;
    cout<<"Enter no:";
    cin>>n;
    i=0;
    while(n>0)
    {
        a[i++]=n%2;
        n=n/2;
    }
    cout<<"Binary no=";
    for(i=i-1;i>=0;i--)
    {
        cout<<a[i];
    }
}