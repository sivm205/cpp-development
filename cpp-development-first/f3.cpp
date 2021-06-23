#include<iostream>
using namespace std;
int var,num1,num2,num3;


void simpleinterest(double principle,float rate ,int time)
{
    var = (principle * rate * time )/100;
   cout<<var;
    
}
int main()
{
    cout<<"enter thee priniple amount\n";
   
    cin>>num1;
    cout<<"enter the rate\n";
 
    cin>>num2;
    cout<<"enter the time";
 
    cin>>num3;
    
    simpleinterest(num1,num2,num3);
}