#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7};
    int temp,i,arr1[7];
    for(i=0;i<2;i++)
    {
        arr1[i+5] = arr[i];
    }
    for(i=2;i<7;i++)
    {
        arr1[i-2] = arr[i];
    }
    cout<<"before rotation\n";
    for(i=0;i<7;i++)
    {
        
        cout<<arr[i]<<" ";
    }
      cout<<"\nafter rotation\n";
    for(i=0;i<7;i++)
    {
        
        cout<<arr1[i]<<" ";
    }
    return 0;

}