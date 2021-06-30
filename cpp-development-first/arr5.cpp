//finding the maximum of array
#include<iostream>
using namespace std;
int main()
{
    int arr[5]  {11,21,23,15,9};
    for(int i = 0;i<5;i++)
    {
        for(int j = 0;j<5;j++)
        {
            if( arr[i]> arr[j])
            {
                //if above condition is true then swap it 
                arr[i] = arr[i] + arr[j];
                arr[j] = arr[i] -arr[j];
                arr[i] = arr[i] = arr[j];
            }

        }       
    }
    
    cout<<"maximum of array is ="<<arr[0];

return 0;
}