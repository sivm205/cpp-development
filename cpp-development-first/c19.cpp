//simple calculator

#include<iostream>
using namespace std;
int main()
{
    cout<<"____________________________welcome!!!!!_________________________________\n";
    cout<<"_________________________________________________________________________________\n____________________________________________________________\n";
    long double var1,var2;
    cout<<"listed operations u can perform are below here"<<endl;
    while(true)
    {
         cout<<"1.Addition\n2.Substraction\n3.Multiplication\n4.division\n5.get the reminder\n6. get the square root\n0.exit\n";
         int option;
         cin>>option;
         switch (option)
         {
         case 1:
         {
            cout<<"enter the first number\n";
         cin>>var1;
         cout<<"enter the second number\n";
         cin>>var2;
         cout<<"addition of two number is =:"<<var1+var2<<endl;
             break;
         }
    
        case 2:
        {
            cout<<"enter the first number\n";
         cin>>var1;
         cout<<"enter the second number\n";
         cin>>var2;
         cout<<"substraction of two number is =:"<<var1-var2<<endl;
         break;
        }
        case 3:
        {
            cout<<"enter the first number\n";
         cin>>var1;
         cout<<"enter the second number\n";
         cin>>var2;
         cout<<"Multiplication of two number is =:"<<var1-var2<<endl;
         break;

        }
        case 4:
        {
            cout<<"enter the first number\n";
         cin>>var1;
         cout<<"enter the second number\n";
         cin>>var2;
         cout<<"Division of two number is =:"<<var1-var2<<endl;
         break;

        }
           case 5:
        {
            cout<<"enter the first number\n";
         cin>>var1;
         cout<<"enter the second number\n";
         cin>>var2;
         cout<<"reminder of two number is =:"<<var1-var2<<endl;
         break;

        }
        case 6:
        {
            cout<<"enter the number to know the square root"<<endl;
            int num,i;
            cin>>num;
            for ( i = 1; i <= num; i++)
            {
                if(num/i==i)
               {
                     cout<<"the square root of "<<num <<" is "<<i<<endl;
               }
      
            }
        }
           case 0:
           {
           exit(0);

             }  
         
         default:
         cout<<"invalid option u can try 0 for exit \n";
             break;
         }

   
    } 
    cout<<"thank you :)"<<endl;
    
return 0;
}