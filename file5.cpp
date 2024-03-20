#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    fstream f1,f2;
    char s1[100];
    f1.open("file.txt",ios::in);
    f2.open("file5.txt",ios::out);
    if(f1.fail())
    {
        cout<<"File not Found...";
        exit(0);
    }
    while(!f1.eof())
    {
        f1>>s1;
        f2<<s1<<endl;
    }
    cout<<"File Copy Successful...";
    f1.close();
    f2.close();
}