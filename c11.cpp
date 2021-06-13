#include<iostream>
using namespace std;
int main()
{
    // intro to the pointer 
    /* pointer is basically a datatype which is used to store address of the variable 
    */
   int a = 10;
      int *p ; //pointer to int ,that will store the address of another variable
      p = &a; // varibale p storing the address of a
      // & operator address ----> determining the address of the variable
      //* dereference operator ---> to access the value
    //here  &a means store the address of the variable "a"

    cout<<"the address of a is "<<p<<endl;
    cout <<"the address of a is ( &a) "<<&a<<endl;

    cout<<"the value of a "<<*p<<endl;
    cout<<"p is variable that stores the address of a (p = &a) "<<p<<endl;
    cout<<"the address of p varibale is " <<&p<<endl;

    /* asterisk (*) is indication of value at particular address space like *p*/

    
}