//check wheather character is lowercase or not

#include<iostream>
using namespace std;
bool check_case(char str)
{
    bool flag = false;
    int asc_val = int(str);
    if (asc_val>=65 && asc_val<=90)
    {
        flag = true;
    }
    return flag;
}
int main()
{
    char str ;
    cout<<"enter the character"<<endl;
    cin>>str;

    if(check_case(str) == false)
    {
        cout<<"given character is lowercase"<<endl;
    }
    else
    {
        cout<<"given character is upper case"<<endl;
    }
    
return 0;
}