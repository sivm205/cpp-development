#include<iostream>
using namespace std;
int main()
{
    int a = 10;
    int b = 30;
    //int c;
    /*
   // swaping of two number using third variable

    cout<<"before swaping of two number is "<<a <<endl<<b<<endl;
    cout <<"after the swaping of number ";
    c = a;
    a = b;
    b = c;
    cout<<a<<endl<<b<<endl;
*/

   //swaping using pointer
   int *c = &a;
   &a = &b;
   &b = *c;
   
return 0;
}