#include <iostream>
#include<fstream>
#include<math.h>

void main()
{
 ofstream fileo("Filethree");
 fileo<<"Hello GS";
 fileo.close();
 ifstream fin("Filethree");
 char ch;
 while(fin)
 {
  fin.get(ch);
  cout<<ch;
 }
 fin.close();

}