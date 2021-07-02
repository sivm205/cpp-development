//     SWAPPING OF TWO USING POINTER 
#include<iostream>
using namespace std;

int swap_number(int *X , int *Y)
{
    int temp = *X;
    *X = *Y;
    *Y = temp;
    //we can print locally or in the main function both
    //as they both share the same memory location
    return 0;
}
int main()
{
    cout<<"enter the first variable =";
    int num1;
    cin>>num1;
    cout<<"enter the second variable=";
    int num2;
    cin>>num2;

    //calling a function
   cout<<"BEFORE SWAPING NUMBERS ARE ="<<num1<<" "<<num2<<endl;
   cout<<"AFTER THE SWAPPING, NUMBER ARE =";
   swap_number(&num1,&num2);
   cout<<num1<<" "<<num2;

    
return 0;
}