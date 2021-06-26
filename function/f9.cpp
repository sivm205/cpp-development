//default argument in cpp function and concept of inlilne function
#include<iostream>
using namespace std;

int inline get_max(int a ,int b)
{
    return a>b ? a:b;
}
int def_argv(int id ,string name = "shivam", float salary = 4569.34)
{
    cout<<"id is ="<<endl<<id;
    cout<<endl;
    cout<<"name of apllicant is="<<endl<<name;
    cout<<endl;
    cout<<"salary of apllicant is="<<endl<<salary;
    cout<<endl;
    return 0;
}
int main()
{

    int i = def_argv(12 ,  "aman",2347.23);
    int func = def_argv( 10 );
    int funct1 = def_argv( 9 );

    cout<<"maximum of two number is"<<endl;
    int j = get_max(23 ,21);
    cout<<j;
    
return 0;
}
