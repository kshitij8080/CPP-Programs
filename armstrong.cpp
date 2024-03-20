#include<iostream>
int main()
{
  int n,d,s=0,n1;
  for(n=1;n<=1000;n++)
  {
    s=0;
    n1=n;
    while(n1>0)
    {
      d=n1%10;
      s=s+d*d*d;
      n1=n1/10;
    }
    if(n==s)
    {
      std::cout<<"\n armstrong no="<<n;
    }
  }
}
