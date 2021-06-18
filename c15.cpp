//coordination game using switch case
#include<iostream>
#include<string>
#include<stdlib.h>
using namespace std;
int main()
{
    int x= 0,y =0;
    char move ;
    while (true)

{     
    cout<<"given moves are \n";
    cout<<"1.up\n2.down\n3.left\n4.right\n5.exit"<<endl;
    cin>>move;
    switch(move)
    {
        case 'u':
        {
             y++;
            break;
        }
        case 'd':
        {
             y--;
            break;
        }
        case 'r':
        {
             x++;
            break;
        }
        case 'l':
        {
             x--;
            break;
        }
        case 'e':
        {
            exit(0);
            break;
        }
        default:
        {
            cout<<"invalid move\n";
        }
    }
         cout<<x<<endl<<y<<endl;
         cout<<"\n\n";
}
return 0;
}