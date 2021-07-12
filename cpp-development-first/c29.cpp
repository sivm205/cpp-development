#include<iostream>
using namespace std;

int table(int *number ) // table through passing a pointer
{
    int res  = 0, i= 1;
    while(i<=10)
    {
        res = (*number) * i;
        cout<<"2 * "<<i<<" = "<<res<<endl;
        i++;
    }
    return 0;
}
int main()
{
    //get input through user in array
    int arr[20] ,size ;
    int *ptr = arr;

    int arr2[20] ;
    int *ptr2 = arr2;

    cout<<"enter the size \n";
    cin>>size;
    cout<<"enter the number"<<endl;
    for(int i = 0;i<size;i++)  //getting element for array 1
    {
        cin>> ptr[i];
        ptr2[i] = ptr[i];
    } 


    cout<<"your array 2 element is "<<endl;
    for (int i = 0; i < size; i++)
    {
        cout<<*(ptr2+i)<<" ";
    }
    
    cout<<"\ntable of 5 are = "<<endl;
    cout<<table(&size);
return 0;
}

