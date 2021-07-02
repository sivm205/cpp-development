//inserting an element in at given possition
#include<iostream>
using namespace std;
int main()
{
    int arr[15] = {1,2,3,4,5,6,7,8,9,6,4,3,2,1};
    int size_arr = sizeof(arr)/sizeof(arr[1]);
    cout<<"\narray elements are"<<endl;
    for(auto i : arr)
    {
        cout<<i<<" ";

    }
    cout<<"\nenter the element to insert at given place "<<endl;
    int num;
    cin>>num;
    cout<<"Now enter the place where u want to insert"<<endl;
    int place ;
    cin>>place;

    for(int i = size_arr;i>=place;i--)
    {
        arr[i+1] = arr[i];
     /* if( i== place)            without conditional we can change its value 
        {
            arr[place] = num;
        }
        */
    }
    arr[place] = num;
    cout<<"insertion succcessfully"<<endl;
    for(int i:arr)
    {
        cout<<i <<" ";
    }
    
return 0;
}