#include<iostream>
using namespace std;

int tacking_input(int arr[],int size_arr)
{
    for(int i=0;i<size_arr;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
int main()
{
    int size ,arr[size];
    cout<<"enter the size of total array\n";
    cin>>size;
    cout<<"enter the element\n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    tacking_input(arr,size);
}