// checking palindrome number
#include<iostream>
using namespace std;
int main()
{
    int arr[10];
    int num, digit;
    bool check =true;
    cout<<"enter the total digit"<<endl;
    cin>>digit;
    cout<<"enter the number u want to check for palindrome"<<endl;
    cin>>num;
//storing every bit in a array separately
    for(int i = 0;i<digit;i++)
    {
        int rem = num%10;
        arr[i] = rem;
        num/=10;
    }
     int j = 0;
    for(int i = (digit-1); i>=(digit/2);i--)
    {
        if(arr[i] != arr[j])
        {
            check = false;
            break;
        }
        else
        {
            j++;
            continue;
        }
    }
    if(check ==false)
    {
        cout<<"NOT AN PALINDROME NUMBER"<<endl;
    }
    else
    {
        cout<<"IT IS AN PALINDROME NUMBER"<<endl;
    }

return 0;
}