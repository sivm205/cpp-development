//table through a function

#include<iostream>
using namespace std;
int table(int n)
{
    int i,tot = 0;
    for(i=1;i<11;i++)
    {
        tot = n*i;
       cout<<tot<<endl;
}
}
int main()
{
    cout<<"enter the number to get the table\n";
    int num ;
    cin>>num;
    table(num);
    return 0;
}