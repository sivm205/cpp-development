//factorial of a number through recursion

#include<iostream>
using namespace std;
signed int factorial(signed int number)
{
    while(number > 0)
    {
        if(number ==0 || number ==1)
        {
            return 1;
        }
        else{
            return number* factorial(number-1);
        }
        
    }
    return 0;
}
int main()
{
   signed int num ;
    cout<<"enter the number to know the factorial ="<<endl;
    cin>>num;
    int funct = factorial(num);
    cout<<funct;
return 0;
}