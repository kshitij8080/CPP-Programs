#include<iostream>
using namespace std;
int main()
{
    int i,j,f,cnt;
    char s1[100];
    cout<<"Enter String=";
    cin>>s1;
    for(i=0;s1[i]!='\0';i++)
    {
        f=0;
        for(j=0;j<i;j++)
        {
            if(s1[i]==s1[j])
            {
                f=1;
                break;
            }
        }
        if(f==0)
        {
            cnt=0;
            for(j=0;s1[j]!='\0';j++)
            {
                if(s1[i]==s1[j])
                {
                    cnt++;
                }
            }
            cout<<"\n"<<s1[i]<<"="<<cnt;
        }
    }
}