#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream f1;      //Declare File
    char ch;
    f1.open("file.txt",ios::in);    //Open File
    if(f1.fail())     //Check File Is Exist or Not
    {
        cout<<"File not Found...";
        exit(0);
    }
    while(!f1.eof())     //Checking End of File
    {
        f1.get(ch);    //Read char from File...
        cout<<ch;
    }
    f1.close();
}