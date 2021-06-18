//checking prime number
#include<iostream>
using namespace std;
int main()
{
    int num ,i, j=0;
    cout<<"enter the number \n";
    cin>>num;
    for(i=1;i<num+1;i++)
    {
        if(num%i==0)
        {
            j++;
        }
    }
    if(j==2)
    {
        cout<<"given number is prime number\n";
    }
    else 
    {
        cout<<"given number is not an prime number\n";
    }
return 0;
}