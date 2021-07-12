// greatest tof three number using pointer
#include<iostream>
using namespace std;

int find_max(int *x,int *y,int *z)
{
    if(*x >*y && *x>*z)
    {
        return *x;
    }
    else if(*y>*x && *y>*z)
    {
        return *y;
    }
    else
    {
        return *z;
    }

}

int find_fact(int *num)
{
    if(*num==0 || *num==1)
    {
        return 1;
    }
    else
    { 
        int res = 1;
        for(int *i= num;  *i>1;  i--)
        {
            cout<<i<<" "
;            
        }
        return res;
        }
}
int main()
{
    int num1 , num2, num3;
    cout<<"ENTER THE NUMBERS="<<endl;
   // cin>>num1>>num2>>num3;
   // cout<<"THE GREATEST OF THREE NUMBER IS = "<<find_max(&num1,&num2,&num3);
      cin>>num1;
      cout<<find_fact(&num1);


 
return 0;
}