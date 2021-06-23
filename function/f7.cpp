//armstrong number through function for for int digit
//try for 1634 9474 8208

#include<iostream>
using namespace std;
int perfectno(int num)
{   int res = 0;
    int temp = num;
    while(num>0)
    {
        int var = num%10;
        long int rem = var*var*var*var;
        res = res + rem;
        num = num/10;

    }
    if(res==temp)
    {
        cout<<"yes given number= "<<temp<<" is perfect number"<<endl;
    }
    else
    {
        cout<<"given number is not an armstrong number"<<endl;
    }
    return 0;
}
int main()
{
    cout<<"enter the 4 digit number to know the armstrong number"<<endl;
    int num;
    cin>>num;
    int funct = perfectno(num);
return 0;
}