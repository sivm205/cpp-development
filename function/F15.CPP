//converting binary to decimal through function 

#include<iostream>
#include<cmath>
using namespace std;

int bin_to_dec(int num)
{
    static int cot ;
    int tot = 0;
    while(num>0)
    {
        int res = num%10;
        tot = tot + res * pow(2, cot);
        cot++;
        num = num/10;
    }
    cout<<"binary to decimal is "<<tot<<endl;
    return 0;
}
using namespace std;
int main()
{
    cout<<"enter the binary number "<<endl;
    int bin_num ;
    cin>>bin_num;
    int funct = bin_to_dec(bin_num);
    
return 0;
}