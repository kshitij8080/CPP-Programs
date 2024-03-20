#include<iostream>
#include<fstream>
#include<ctype.h>
#include<stdlib.h>
using namespace std;

int main()
{
    ifstream f1("file4.txt",ios::in);
    char ch;
    int c1=0,c2=0,c3=0,c4=0,c5=0;
    if(f1.fail())
    {
        cout<<"File not Found....";
        exit(0);
    }
    while(!f1.eof())
    {
        f1.get(ch);
        if(isalpha(ch))
          c1++;
        else if(isdigit(ch))
          c2++;
        else if(ch==' '|| ch=='\n')  //words
          c3++;
        else
          c5++;  //symbol

        if(ch=='\n')
          c4++;
    }
    cout<<"\n alphabets="<<c1;
    cout<<"\n Digits="<<c2;
    cout<<"\n Words="<<c3;
    cout<<"\n lines="<<c4;
    cout<<"\n Symbols="<<c5;
    f1.close();
}