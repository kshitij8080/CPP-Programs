#include <iostream.h>
#include<conio.h>

int main() 
{
   int size = 5;
   clrscr();
  for (int i = 0; i < size; i++) 
  {
    for (int j = 1; j < size - i; j++) 
    {
      cout << " ";
    }
 
    for (int k = 0; k <= i; k++) 
    {
      cout << "*";
    }
    cout << "\n";
  }
  getch();
  return 0;
}