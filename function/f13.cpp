// introduction to the pointer

#include<iostream>
using namespace std;
int sum(int *num) //function with the pointer to the int as a parameter
{
    *num = *num+10;
    num = num+10;
    cout<<"address part is="<<num<<endl;
    return 0;                                               //     int *num = &X                                                            //     
}                                                          //       &---->stores the address part
int sum1(int *x)                                               // * ----> pointing to the value at that addresss
{
    *x = *x*2;
    return *x;
}
int main()
{
    cout<<"enter the number\n";
    int X;
    cin>>X;
    sum(&X); //address needs to be passed as function containig pointer 
    //         so it will store referencing variable
    cout<<"printng a value by passing referencing="<<X;
    //cout<<sum(X);----> it will throw an error
    
    //________________________________________________________________________________
    cout<<endl;
    cout<<"printing with the return statement "<<sum1(&X);

    cout<<endl<<*(&X);
    // all function and variables are pointing to the same memory location 
    //change in one lets other variable changed.

return 0;
}