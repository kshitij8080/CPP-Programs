#include<iostream>
int fact(int n)
{
  int f=1;
  for(int i=1;i<=n;i++)
  {
    f=f*i;
  }
  return f;
}
int main()
{
  int n,i;
  std::cout<<"Enter limit:";
  std::cin>>n;
  for(i=1;i<=n;i++)
  {
    std::cout<<i<<"/"<<fact(i)<<"\t";
  }
}
