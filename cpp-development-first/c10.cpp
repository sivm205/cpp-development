#include<iostream>
using namespace std;
int main()
{
    int rows,column ,final[5][5];
   // int sum = 0;
    int arr[5][5] = {{1,2},{4,2}}, brr[5][5] = {{5,2},{2,1}} ,i,j,k;

     

    cout<<"matrix multiplication are="<<endl;
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            final[i][j] =0;

            for(k=0;k<2;k++)
            {
                final[i][j] += (arr[i][k] * brr[k][j]);
            }
                

        }
    }
    for(i=0;i<2;i++)
    {
        for(j=0;j<2;j++)
        {
            cout<<final[i][j]<<endl;
        }
    }


}