//array traversal 
#include<iostream>
using std::cin;
using std :: cout;
using std:: endl;
int main()
{
    cout<<"enter the total number of array size"<<endl;
    int size ;
    cin>>size;
    int arr1[size];
    cout<<"enter the element "<<endl;
    for(int i =0;i<size ;i++)
    {
        cin>>arr1[i];
    }

    //modifying the value while traversing 
    for(int i= 0;i<size ;i++)
    {
        cout<<arr1[i]*2<<endl;
    }
    cout<<endl;

    //traversing through range
    for(int i:arr1)
    {
        cout<<i<<"\t";
    }

return 0;
}