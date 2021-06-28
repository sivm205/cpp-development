//creating a array

#include<iostream>
using std:: cout ,std::cin ,std::endl;
int main()
{
 //array declaration
    int arr[5] = {1,2,3,4,5};
    //fetching array element through index
    cout<<"arr[0] = "<<arr[0]<<endl;
    cout<<"arr[3]= " <<arr[3]<<endl;

    cout<<"total space occupied by array in memory is "<<sizeof(arr)<<endl;
    cout<<"And space taken by one index is "<<sizeof(arr[1])<<endl;
    cout<<"total number of index in array is "<<sizeof(arr)/sizeof(arr[1])<<endl;

return 0;
}