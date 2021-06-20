//example of buffering and auto keyword

#include<iostream>
using namespace std;
int main()
{
    cout<<"ENTER THE FIRST NUMBER"<<endl;
    int num ,num2 ;
    cin>>num;
    cout<<"ENTER THE SECOND NUMBER"<<endl;
    cin>>num2;

    cout<<"ADDITION OF 2 NUMBER IS"<<endl;
    auto z = num+num2; 
    // auto variable is keyword in which we not intend to mention specific data type for variable 
    //it auto detect as per the variable in the result z
    cout<<z<<endl;
    return 0 ;
    
return 0;
}