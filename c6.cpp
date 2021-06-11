#include<iostream>
using namespace std;
int main()
{
    int i;
    int arr[3] = {1,2,3};
    for(i=0;i<3;i++)
    {
        cout<<i<<endl;
    }
    cout<<sizeof(arr)<<" "<<sizeof(arr[0]);
    cout<<endl<<"the total array  element is "<<sizeof(arr)/sizeof(arr[0])<<endl;

    //travering a array list

    for(int element :arr)
    {
        cout<<element<<" ";
    }
}