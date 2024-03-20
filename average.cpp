using namespace std;
#include<iostream>

void avg(int a,int b,int c)
{
    int d=(a+b+c)/3;
    cout<<"Average of 3 integer="<<d<<endl;
}
void avg(float e,float f,float g)
{
    float s=(e+f+g)/3;
    cout<<"average of 3 float="<<s<<endl;
}

int main()
{
    avg(10,25,45);
    avg(10.5f,55.6f,66.0f);
}