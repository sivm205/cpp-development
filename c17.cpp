//swaping a number without using a third variable
#include<iostream>
using namespace std;
int main()
{
    int a = 10, b = 15;
    a = a+b;
    b = a-b;
    a = a - b;

    cout<<"after swaping ="<<a<<endl<<b<<endl;
    
return 0;
}