#include<iostream>
using namespace std;

int display(int arr[])
{
    for(int i = 0;i<5;i++)
    {
        cout<<arr[i]<<endl;
    }
    return 0;
}
int main()
{
    int array[5] = {1,2,3,4,5};
    display(array);

}