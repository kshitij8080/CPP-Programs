using namespace std;
#include<iostream>
class demo
{
    public:
    void display_str(char s1[100])
    {
        cout<<"string="<<"\" "<<s1<<"\"";
    }
    void display_str(int n,char s1[100])
    {
        cout<<"\n string=";
        for(int i=0;i<n;i++)
        cout<<s1[i];
    }
    void display_str(int m,int n,char s1[100])
    {
        cout<<"\nstring=";
        for(int i=m;i<n;i++)
        cout<<s1[i];
    }
};
int main()
{
    demo ob;
    char s1[100];
    cout<<"Enter string:";
    cin>>s1;
    ob.display_str(s1);
    ob.display_str(3,s1);
    ob.display_str(5,8,s1);
}