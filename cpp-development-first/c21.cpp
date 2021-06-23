//printing prime number 1 to n number

#include<iostream>
using namespace std;
int main()
{
    int i,j ,check ; // as a flag variable  basically used as bool var.( either 0 or 1 )in control flow structure 
    cout<<"get the prime number 1 to ="<<endl;
    int num;
    cin>>num;
    for ( i = 2; i <=num; i++)
    {   check = 1;
        for(j=2;j<= (i/2);j++)
        {   
            if(i%j==0)
            {
                check = 0;
            }
        }
        if(check==1)
        {
            cout<<i<<endl;
        }
    }
    

}




/*{
    int i= 2,num;
    int count = 0;
    cout<<"enter the num"<<endl;
    cin>>num;
    for(int j=2;j<=num;j++)
    {
        int i=1;
        while(i<=j)
         {
        if(j%i==0)
        count++;
        i++;
        
         }
      if(count==2)
      {
          cout <<j<<endl;
      }

    }
return 0;
}




{
    int i,j ,num ,count= 0;

    cout<<"enter the num"<<endl;
    cin>>num;
    for(i= 2;i<=num;i++)
    {
        for(j=2;j<=i;j++)
        {
            if(i%j==0)
            {
                count++;
                break;
            }
        }
         if(count==2)
        {
            cout<<i<<endl;
        }
      
    }
   
}

*/

