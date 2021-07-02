//deletion in an array

#include<iostream>
using namespace std;
int main()
{
    int arr[10] = {1,2,3,4,5,6,7,8,9,10};
    cout<<"\nbefore deletion "<<endl;
    for(int i=0 ;i<10;i++)
    {
        cout<<arr[i]<< " ";
    }
    cout<<"\nenter the place u want to delete"<<endl;
    int place ;
    cin>>place;
    for(int i = place-1;i<10;i++) 
    {
        arr[i] = arr[i+1];
    }
    cout<<"aftet the deletion"<<endl;
   for(int i = 0;i<10-1;i++)
   {
       cout<<arr[i]<<" " ;
   }

return 0;
}