#include<iostream>
int main()
{
  int n,i,f=0,s=1,t;
  std::cout<<"Enter no:";
  std::cin>>n;
  std::cout<<f<<"\t"<<s;
  for(i=1;i<n;i++)
  {
    t=f+s;
    std::cout<<"\t"<<t;
    f=s;
    s=t;
  }
}
