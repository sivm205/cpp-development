//check wheather array is sorted or not

#include<iostream>
using namespace std;

bool check_sortarray(int arr[] , int size)
{
    for(int i = 0;i<size;i++)
    {
        if(arr[i] > arr[i+1])
        {
            return true;
        }
        else
        {
            return false;
        }
    }
    
    
}
int main()
{
    int size = 5;
    int arr[size] = {1,2,3,6,7};
    if(check_sortarray(arr, size) == true)
    {
        cout<<"not sorted "<<endl;
    } 
    else
    {
        cout<<"sorted"<<endl;
    }
  

return 0;
}