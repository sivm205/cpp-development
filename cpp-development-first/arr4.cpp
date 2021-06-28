//counting number of distinct element of arrays

#include<iostream>
using namespace std;

int count_array(int arr[] ,int n) //it will count how many times a particular element is repeated
{
     for (int i = 0; i < n; i++)
    {       int count = 0;
        for (int j = 0; j <n; j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
            }
        }
            cout<<arr[i]<<" = "<<count<<endl;

    }
    return 0;
        
}


int count_distinct(int arr[], int n)
{
    int count = 0;
    for(int i = 1;i<=n; i++)
    {    
        bool isdistinct = true;
        for (int j = i-1; j>=0;j--)
        {
            if(arr[i]==arr[j])
            {
                isdistinct = false  ;
                break;
            }
            
        }
         if(isdistinct == true)
            {
                count++;
            }
        
    }
    cout<<count<<endl;
        return 0;

}
int main()
{
    int arr[] = {1,3,2,3,1,2,3,4,2,1,3};
    int n = sizeof(arr)/sizeof(arr[1]);
    int i = count_distinct(arr , n);
    int i = count_array(arr , n);   

return 0;
}