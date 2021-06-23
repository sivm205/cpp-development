#include<iostream>
#include<chrono>
using namespace std;
using namespace std :: chrono;
int main()
{
    int arr1[5] = {1,2,3,4,5};
    int arr2[5] = {6,7,8,9,10};
    int i=0;
    auto start = high_resolution_clock::now();
    while(i<5)
    {
        cout<<i;
        i++;
    }
      auto stop = high_resolution_clock::now();
        auto duration = duration_cast<microseconds>(stop - start);
  
    cout << "Time taken by function: "
         << duration.count() << " microseconds" << endl;
  
    return 0;

}