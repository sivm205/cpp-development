#include<iostream>
using namespace std;
int main()
{   //greatest of three number
    int arr[3];
    cout<<"enter the numbers "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<"enter the " << i+1 <<" "<<"number"<<endl;
        cin>>arr[i];
    }
    if(arr[0]> arr[1] && arr[0]> arr[2])
    {
        cout<<"the greater number is \n"<<arr[0]<<endl;
    }
    else if(arr[1]>arr[2] && arr[1] >arr[0])
    {
        cout<<"the greatest are "<<arr[1]<<endl;

    }
    else 
    {
        cout<<arr[2]<<" "<<"are the greatest\n";
    }

return 0;
}