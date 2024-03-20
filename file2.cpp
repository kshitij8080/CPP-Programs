#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
    ifstream f1;
    ofstream f2;
    char ch;
    f1.open("file.txt",ios::in);
    f2.open("file2.txt",ios::out);

    if(f1.fail())
    {
        cout<<"File not Found...";
        exit(0);
    }
    while(!f1.eof())
    {
        f1.get(ch);
        f2.put(ch);
    }
    cout<<"File Copy Successful...";
    f1.close();
    f2.close();
}