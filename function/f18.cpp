//checking palindrome number thorugh function
#include<iostream>
using namespace std;
int check_palindrome(int );
bool check_pallindrome(int num,int digit)
{
    static int j=0;
    bool check = true;
    int arr[50];
    for(int i =0;i<num;i++)
    {
        int rem = num%10;
        arr[i] = rem;
        num/=10;
    }
    for(int i = (digit-1); i>= (digit/2); i--)
    {
        if(arr[i] != arr[j])
        {
            check = false;
            break;
        }
        else{
            j++;
            //continue;
        }
        
    }    
    return 0;
}
int main()
{   
    int digit , num;
    
    cout<<"TYPE THE TOTAL DIGIT NUMBER "<<endl;
    cin>>digit;
    cout<<"ENTER THE NUMBER TO CHECK FOR PALINDROME "<<endl;
    cin>>num;
    if(check_pallindrome(num, digit)== false)
    {
        cout<<"GIVEN NUMBER IS NOT AN PALINDROME NUMBER"<<endl;
    }
    else{
        cout<<"GIVEN NUMBER IS AN PALINDROME NUMBER"<<endl;
    }
return 0;
}


int check_palindrome(int num)
{
    int arr[50] , sum = 0;
    int temp = num;
    while (num>0) // reversing a number
    {
        int rem = num%10;
        int sum = (sum*10 ) + rem;
        num/=10;
    }  
    if(temp ==sum)
    {
    cout<<"GIVEN NUMBER IS AN PALINDROME NUMBER"<<endl;

    }
    else
    {
    cout<<"GIVEN NUMBER IS NOT AN PALINDROME NUMBER"<<endl;

    }
    return 0;
}