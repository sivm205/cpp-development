#include<iostream>
using namespace std;
int main()
{
    int rows,column ,final[5][5];
   // int sum = 0;
    int arr[5][5] ,brr[5][5] ,i,j,k;

     cout<<"enter the total number of rows="<<endl;
    cin>>rows;

    cout<<"enter the total number of column="<<endl;
    cin>>column;

    cout<<"enter the elements for first array\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>arr[rows][column];
            cout<<endl;
        }
    }
    cout<<"enter the elements for second array\n";
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            cin>>brr[rows][column];
            cout<<endl;
        }
    }

    cout<<"matrix multiplication are="<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            final[i][j] =0;

            for(k=0;k<column;k++)
            {
                final[i][j] += (arr[i][k] * brr[k][j]);
            }
                

        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<final[i][j]<<endl;
        }
    }


}