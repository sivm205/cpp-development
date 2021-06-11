#include<iostream>
using namespace std;
int main()
{
    int rows,column ,sum[rows][column] ;
    int arr[rows][column] ,brr[rows][column] ,i,j,k;

     cout<<"enter the total number of rows="<<endl;
    cin>>rows;

    cout<<"enter the total number of column="<<endl;
    cin>>column;

    cout<<"enter the elements for first array\n";
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=column;j++)
        {
            cin>>arr[rows][column];
            cout<<"\t";
        }
    }
    cout<<"enter the elements for second array\n";
    for(i=1;i<=rows;i++)
    {
        for(j=1;j<=column;j++)
        {
            cin>>brr[rows][column];
            cout<<"\t";
        }
    }

    cout<<"matrix multiplication are="<<endl;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            for(k=0;k<column;k++)
            {
                sum[i][j] = 0;
                sum[i][j] = sum[i][j]+ (arr[i][k] * brr[k][j]);
            }
        }
    }
    for(i=0;i<rows;i++)
    {
        for(j=0;j<column;j++)
        {
            cout<<sum[i][j]<<endl;
        }
    }


}