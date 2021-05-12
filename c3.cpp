#include<iostream>
using namespace  std;

int taking_input(int arr[],int size_arr)
{
    for(int i=0;i<size_arr;i++)
    {
        //tacking input
        cin>>arr[i];
    }
    //printing array elemet
    for(int i=0;i<size_arr;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
int main()
{
    int size, arr[size];
    taking_input(arr,size);
}