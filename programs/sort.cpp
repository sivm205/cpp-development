#include<iostream>
using namespace std;
int main()
{
    int arr[10],temp = 0,i,num,j;
    cout<<"enter the  total number of array\n";
    cin>>num;
    cout<<"enter the elements\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    cout<<"before sortig =\n";
    for(i= 0;i<num;i++)
    {
        cout<<arr[i]<<"\t";
    }
    cout<<"\nafter sorting\n";
    for(i=0;i<num;i++)
    {
        for(j =i+1;j<num+1;j++)
        {
            if(arr[i]> arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
             arr[j] = temp;
            }
            
        }
    }
    for(i=0;i<num;i++)
    {
        cout<<arr[i]<<"\t";
    }
    return 0;

}