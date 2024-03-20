#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
    char s1[20];
    cout<<"enter string:";
    cin.getline(s1,5);
    cout<<"Character:";
    cout.write(s1,5);
}