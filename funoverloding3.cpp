#include<iostream>
using namespace std;
class Demo
{   public:
    void sort(int a[100],int n)
    {
	 int pass,i,t;
	 for(pass=0;pass<n;pass++)
	 {
	    for(i=0;i<n-pass;i++)
	    {
	      if(a[i]>a[i+1])
	      {
		t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	      }
	    }
	 }
	 cout<<"Sorted Array=";
	 for(i=0;i<n;i++)
	 {
	    cout<<a[i]<<"\t";
	 }
}
   void sort(float a[100],int n)
  {
	  int pass,i;
	  float t;
	 for(pass=0;pass<n;pass++)
	 {
	    for(i=0;i<n-pass;i++)
	    {
	      if(a[i]>a[i+1])
	      {
		t=a[i];
		 a[i]=a[i+1];
		 a[i+1]=t;
	      }
	    }
	 }
	 cout<<"\nSorted Array=";
	 for(i=0;i<n;i++)
	 {
	    cout<<a[i]<<"\t";
	 }
       }

};
 int main()
{
   Demo ob;
   int a[]={11,77,33,55,6,77,44};
   float b[]={11.9,55.33,55.77,22.55,8.99,33.67};
   ob.sort(a,7);
   ob.sort(b,6);
}