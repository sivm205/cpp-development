//function to get maximum of three number 
#include<iostream>
using namespace std;

double get_max(int num1 ,int num2 ,int num3)

{
    if(num1 >num2 && num1 >num3)
    {
        return num1;
    }
    else if (num2>num1 && num2 >num3)
    {
        return num2;
    }
    else{
        return num3;
    }
}
int main()
{
   int res = get_max(1,3,2);
    cout<<res<<endl;
    cout<<get_max(8,3,5);
    

return 0;
}