//sum of n number 3467 = 3+4+6+7
#include<iostream>
using namespace std;
int main()
{
    int num = 3476;
    int res = 0;
    while(num>0)
    {
        res = res+(num%10);
        num = num/10;
    }
    cout<<res<<endl;
return 0;
}