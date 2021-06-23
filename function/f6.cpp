//fibonacci seriesss
#include<iostream>
using namespace std;
int fibo(int num)
{
    int a  = 0;
    int b = 1;
    int res;
  //  cout<<a<<endl<<b<<endl;
    for(res  =0; res<num;res++)
    {
        res = a+b;
        cout<<res<<endl;
        b = a;
        a = res;
    }
    return 0;
}
int main()
{
    cout<<"enter the number "<<endl;
    int num;
    cin>>num;
    fibo(num);
return 0;
}