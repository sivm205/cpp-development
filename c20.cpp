//minimum and maximum of n number
#include<iostream>
using namespace std;
int main()
{
    int i,temp=0;
    int arr[5];
    cout<<"enter the total element \n";
    int num;
    cin>>num;
    cout<<"enter the elements\n";
    for(i=0;i<num;i++)
    {
        cin>>arr[i];
    }
    for(i=0;i<num;i++)
    {   for(int j=1;j<num;j++)
     {
        if(arr[i]>arr[i+1])
        {
            temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
        }
     }
    }
          cout<<"max element is=:"<<arr[num]<<endl;


return 0;
}