#include<iostream>
using namespace std;
class add
{
    public:
      int *a,*b,ans;
      add()
      {
          a=new int(260);
          b=new int(239);
          ans=*a+*b;
          cout<<"Addition="<<ans;
          delete a;
          delete b;
      }
};

int main()
{
    add ob;
}