#include<iostream>
using namespace std;
int main()
{
    int i= 1, num;
    cout<<"enter the number to know the square root"<<endl;
    cin>>num;
    /*for ( i = 1; i <= num; i++)
    {
        if(num/i==i)
        {
            cout<<"the square root of "<<num <<" is "<<i<<endl;
        }
      
    }
    */
   int count= 0;
   while(i*i<=num)
   {
       count++;
       i++;

   }
   cout<<"the square of number is "<<count; // or i-1 can also print square root
return 0;
}