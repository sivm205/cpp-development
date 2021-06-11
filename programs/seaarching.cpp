#include<iostream>
using namespace std;
int main()
{
    int arr[10],i,j,num;
    cout<<"enter the total number of element\n";
    cin>>num;
    cout<<"enter the numbers\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number to search\n";
    int s_num;
    cin>>s_num;
    for(i=0;i<num;i++)
    {
        if(s_num ==arr[i])
        {
            cout<<"yes this number is in the array list at index number \n"<< i+1 ;
            break;
        }
   
    }
    
    return 0;
}