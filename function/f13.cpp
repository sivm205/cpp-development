//finding a greatest common divisor
#include<iostream>
#include<algorithm>
using namespace std;

long int gcd(long int num1 ,long int num2)
{
    int temp;
    for(signed int i = 1;i <= min(num1 , num2) ; i++)

    {   
        if(num1%i==0 && num2%i==0)
    {   
        temp = i;

    }
    }
        cout<<"the greatest common divisor of two number is "<<temp<<endl;
        cout<<"And the least common factor of above two number is "<<(num1 * num2)/temp <<endl;

    return 0;
}
int main()
{
    cout<<"enter the first number "<<endl;
    long int num1 ;
    cin>>num1;
    cout<<"enter the second number"<<endl;
  long   int num2;
    cin>>num2;
    int funct = gcd(num1,num2);
return 0;
}