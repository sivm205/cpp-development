#include<iostream>
#include"add.h"
#include"states.h"
using namespace std;
int main()

{
    double num1,num2;
    cout<<"enter the first number\n";
    cin>>num1;
    cout<<"enter the second number \n";
    cin>>num2;
    cout<<"result of addition is \n"<<add(num1,num2)<<endl;
    cout<<"result for substraction is\n"<<substract(45,21)<<endl;
    cout<<multiply(num1,num2);
    return 0;
    
}
