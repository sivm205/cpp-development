#include<iostream>
using namespace std;
int main()
{
    int arr[10],i;
    int total;
    cout<<"enter the total number of element\n";
    cin>>total;
    cout<<"enter the arrays elemet\n";
    
    for(i=0;i<total;i++)
    {
        cin>>arr[i];
    }
    cout<<"enter the number u wanted to inserted\n";
    int insrt_num;
    cin>>insrt_num;
    cout<<"enter the possition";
    int poss;
    cin>>poss;
    for(i=total; i>=poss;i--)
{
        arr[i+1] = arr[i];
        if(i==poss)
        {
            arr[poss] = insrt_num;
        }
        
        
}
    for(i=0;i<total+1;i++)
    {
        cout<<arr[i]<<"\t ";
    }
    return 0;
}