//printing prime number 1 to n number

#include<iostream>
using namespace std;
int main()
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
}*/




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