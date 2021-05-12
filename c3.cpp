#include<iostream>
using namespace  std;

int taking_input(int arr[],int size_arr)
{
    for(int num =0;num<size_arr;num++)
    {
        cout<<arr[num]<<endl;
    
    }
    return 0;
}
int main()
{
    int size;
    int array[size];
    cout<<"enter the total number of array \n";
    cin>>size;
    cout<<"enter the elements of array\n";
    for(int i =0;i<size;i++)
    {
        cin>>array[i];
        
    }
    taking_input( array,size);


}