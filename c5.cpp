#include<iostream>
#include<chrono>
using namespace std;
using namespace std:: chrono;
int main()
{
    int arr[5][5]= {1,2,3,4,5,6,7,8,9,7,5,4,3,2,3,4,5,6,5,4,2,1,2,3};
    auto start = high_resolution_clock :: now();
    {
        for(int i=0;i<5;i++)
        {
            for(int j=0;j<5;j++)
            {
                cout<<arr[i][j];
            }
           
        }
    }
    auto end = high_resolution_clock ::now();
    auto duration = duration_cast<microseconds>(end-start);
    cout<<"\n";
    cout<<duration.count();
    return 0;
}