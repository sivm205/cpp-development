#include<iostream>
using namespace std;
int main()
{
    int arr[50] = {0};
    cout<<"enter the total number of array size"<<endl;
    int size_arr;
    cin>>size_arr;
    if(size_arr<0 || size_arr>50)
    {
        cout<<"invalid range"<<endl;
        return -1;
    }
    cout<<"enter the element"<<endl;
    for(int i = 0;i<size_arr;i++)
    {
        cin>>arr[i];
        
    }
    cout<<"enter the options you want to perform with the array"<<endl;
    int option;
    while(true)
    {
    cout<<"\n1.get the maximum of array\n2.get the minimum of array\n3.sorted array\n4.exit"<<endl;
    cin>>option;
    for(int i = 0;i<size_arr;i++)
    {   for(int j =0;j<size_arr;j++)
        {
        if(arr[i] < arr[j])
        {
          int temp =   arr[i];
          arr[i] = arr[j];
          arr[j] = temp;
        }
        }
    }
     switch (option)
     {
     case 1:
        cout<<"maximum element of array is= "<<" "<<arr[size_arr-1]<<endl;
         break;



     case 2:
        cout<<"minimum element of array is = "<<arr[0]<<endl;
        break;

    case 3 :
         cout<<"sorted array is = "<<endl;
         for(int i = 0;i<size_arr;i++)
         {
             cout<<arr[i]<<" ";
             
         }
         break;

    case 4:
        exit(0);
        break;

    default :
    {
        cout<<"invalid option";
    }    
     
    

    }
    
}
}