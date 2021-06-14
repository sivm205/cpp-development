#include<iostream>
using namespace std;
int main()
{   //greatest of three number
    int arr[3];
    cout<<"enter the numbers "<<endl;
    for(int i =1;i<=3;i++)
    {
        cout<<"enter the " << i <<" "<<"number"<<endl;
        cin>>arr[i];
    }
    if(arr[1]> arr[2] && arr[1]> arr[3])
    {
        cout<<"the greater number is \n"<<arr[1]<<endl;
    }
    else if(arr[2]>arr[1] && arr[2] >arr[1])
    {
        cout<<"the greatest are "<<arr[2]<<endl;

    }
    else 
    {
        cout<<arr[3]<<" "<<"are the greatest\n";
    }

return 0;
}