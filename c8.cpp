#include<iostream>
using namespace std;
int main()
{
  /*  int arr1[3][3] = {1,2,3,4,5,6,7,8,9};
    int arr2[3][3]= {1,2,3,4,5,6,7,8,9};
    int i,j,k,l ;
    static int tot;
  
    
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            for(k=0;k<3;k++)
            {
                for(l=0;l<3;l++)
                {
                    if(i == k && j==l)
                    {
                        cout<<arr1[i][j] + arr2[k][l]<<endl;
                    }
                }
            }
        }
    }
}*/


    //_______________________________________________________________________________________________________________

    int arr1[2][2] = {{1,2},{3,4}};
    int arr2[2][2] = {{3,1},{5,6}};
    int sum[2][2];

    for(int i= 0;i<2;i++)
    {
        for(int j = 0;j<2;j++)
        {
            sum[i][j] = arr1[i][j] +arr2[i][j];
        }
    }

    for(int i= 0;i<2;i++)
    {
        for(int j =0;j<2;j++)
         {
        cout<<sum[i][j]<<endl;
        }

    }
}