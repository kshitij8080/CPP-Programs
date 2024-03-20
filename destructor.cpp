#include<iostream>
using namespace std;
class Add{
    public:
      int *a,*b,c;
      Add()
      {
          a=new int(10);
          b=new int(50);
            c=*a+*b;
          cout<<"Addition="<<c;
      }
      ~Add()
      {
          delete a;
          delete b;
          cout<<"\n Memory Free....";
      }
};

int main()
{
     Add ob;
}