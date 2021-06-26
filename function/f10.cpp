//counting a number is digit through a function

#include<iostream>
using namespace std;
int count(long int num)
{
    static int temp ;
    int num1 = num;
    while(num>0)
    {
        int res = num%10;
        temp++;
        num /= 10;
    }
    cout<<"total number of digit in a "<<num1<<" is "<<temp<<endl;
    return 0;
}
int main()
{
    long int num ;
    cout<<"enter the number "<<endl;
    cin>>num;
    int func = count(num);

return 0;
}