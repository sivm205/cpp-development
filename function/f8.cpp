//palindrone 
#include<iostream>
using namespace std;
int check_pal(int num)
{   int var = num;
int temp;
    int res = 0;
    while(num>0)
    {
        temp = num%10;
        res = res*10 +temp;
        num = num/10;
    }
    if(res ==var)
    {
        cout<<"given number is palindrone"<<endl;
    }
    else
    {
        cout<<"given number is not an palindrone"<<endl;
    }
    return 0;
}
int main()
{
    int NUM ;
    cout<<"enter the number"<<endl;
    cin>>NUM;
    int i = check_pal(NUM);
return 0;
}