#include<iostream>
using namespace std;
int main()
{
	int n,s=0;
	cout<<"enter number:";
	cin>>n;
	while(n>0)
	{
		s=s*10+(n%10);
		n=n/10;
	}
	cout<<"reverse no="<<s;
}