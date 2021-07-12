#include<iostream>
using namespace std;
int main()
{
    /* string name , surname , address ;
    cout<<"enter the name "<<endl;
    getline(cin , name);

    cout<<"enter your lastname "<<" "<<name<<endl;
    cin>>surname;

    cout<<"HELLO!!!"<<name + surname <<" "<<"WELCOME "<<endl;
    cout<<"please add address"<<endl;
    cin>>address;

    cout<<"YOUR ADDRESS "<<name<<" IS "<<address<<endl; */
    //____________________________________________________________________________________________________
    string str1{"hello"};
    int var{23};
    cout<<var<<" "<<str1;
    string str2{"shivam kumar mishra"};
    cout<<endl;
    cout<<"kumar starts at = "<<str2.find("kumar")<<endl;
    cout<<"length ="<<str2.length()<<endl;


return 0;
}