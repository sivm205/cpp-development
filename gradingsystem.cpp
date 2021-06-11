#include<iostream>
using namespace std;
int main()
{
    int array1[9] = {1,2,3,4,5,6,7,8,9};
    int array2[9] = {9,8,7,6,5,4,3,2,1};
    int i,sum,tot[9];

    for(i=0;i<9;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(i == j)
            {
                cout<<array1[i] + array2[j] <<endl;
                cout<<"___\n\n";
            }
        }
    }

}