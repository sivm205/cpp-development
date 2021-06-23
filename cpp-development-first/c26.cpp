//reversing a number 
#include<iostream>
using namespace std;
int main()
{
    auto num{123456789}, res = 0;
    cout<<"reversing s number is ="<<endl;
    while(num>0)
    {
        res = num%10;
        cout<<res;
        num = num/10;
    }
return 0;
}