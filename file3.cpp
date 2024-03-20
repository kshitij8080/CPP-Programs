#include<iostream>
#include<fstream>
#include<stdlib.h>

using namespace std;

int main()
{
    fstream f1,f2;
    char ch,ch1;
    f1.open("file.txt",ios::in);
    f2.open("file3.txt",ios::out);
    if(f1.fail())
    {
        cout<<"File not Found...";
        exit(0);
    }
    while(!f1.eof())
    {
        f1.get(ch);
        if(ch==' ')
        {
            f1.get(ch);
            if(ch==' ')
              f2.put(ch);
            else
            {
                f2.put(ch);
                f2.put(ch1);
            }
        }
        else
        f2.put(ch);
    }
    cout<<"File Copy Successful...";
    f1.close();
    f2.close();
}