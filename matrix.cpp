#include<iostream>
using namespace std;
class mymatrix
{
    public:
      int **a,i,j,m,n;
      mymatrix(int m,int n)
      {
        this->m=m;
        this->n=n;
        a=new int*[m];
        for(i=0;i<m;i++)
        a[i]=new int[n];
        cout<<"Enter matrix:";
        for(i=0;i<m;i++)
        {
            for(j=0;j<n;j++)
            {
                cin>>a[i][j];
            }
        }
      }
      void disp()
      {
        int s=0;
        for(i=0;i<m;i++)
        for(j=0;j<n;j++)
        s=s+a[i][j];
        cout<<"\n sum="<<s;
      }
};
int main()
{
    mymatrix ob(2,2);
    ob.disp();
}