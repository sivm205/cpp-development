#include<iostream>
using namespace std;
int main()
{

    int arr[10], i,temp,num;
    cout<<"enter the numbers of element\n";
    cin>> num;
    cout<<"enter the elements\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"now enter the index number to delete that number\n";
    int poss;
    cin>>poss;
    for(i=poss; i<num;i++)
    {
        arr[i] = arr[i+1];
    }
    for(i=0;i<num-1;i++)
    {
        cout<<arr[i]<<" ";
    }
    return 0;
}