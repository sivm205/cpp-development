//function parameters
#include<iostream>
using namespace std;
void printnum1(int n1, float n2 );

void printnum(int num)
{
    cout<<"printing a number \n"<<num<<endl;

}

int main()
{


    int num = 7;
    printnum(num);
    cout<<"first function calling successfully\n";
    int num1  = 23;
    float num2 = 23.3;
    printnum1(num1,num2);
    cout<<"\n second function called successfully\n";

}

void printnum1(int n1, float n2 )
{
cout<<"given number is int\n"<<n1<<endl;
cout<<"given number is flaot\n"<<n2<<endl;
}