//checking even number through function

#include<iostream>
using namespace  std;
void checknum1();
void checknum()
{
    int num;
    cout<<"enter the int digit\n";
    cin>>num;
    if(num%2==0)
    {
        cout<<"given number is an even number\n";
    }
    else{
        cout<<"not a even number\n";
    }
}
int main()
{
    cout<<"function calling first\n";
    checknum();  //     execute first those who called first in the main function
    checknum1();
    return 0;
}
void checknum1()
{
    int num;
    cout<<"enter the int digit\n";
    cin>>num;
    if(num%2==0)
    {
        cout<<"given number is an even number\n";
    }
    else{
        cout<<"not an even number\n";
    }
}