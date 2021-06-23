#include<iostream>
using namespace std;
int get_sum(int a , int b)
{
    return a+b;
}
int main()
{
    cout<<"enter the number "<<endl;
    int a ,b;
    cin>>a>>b;
    cout<<get_sum(a,b);
    
    
return 0;
}