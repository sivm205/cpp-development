//printing a pattern
/* i/p read <--- 5
0
10
010
1010
01010
*/

#include<iostream>
using namespace std;
int main()
{
    int  num ,i ,j;
    cout<<"enter the number of rows"<<endl;
    cin>>num;
    for(i=1;i<=num;i++)
    {
        for(j=1;j<=i;j++)
        {
            if( (i+j)%2==0)
            {
                cout<<"0";
            }
           
            else{
                cout<<"1";
            }
            if(i==j)
            {
                cout<<endl;
            }
        }
      
    }

}