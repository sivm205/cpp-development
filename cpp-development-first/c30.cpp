//   MATRIX TRANSPOSE
#include<iostream>
using namespace std;
int main()
{
    int arr[3][3];
    int brr[3][3];
    cout<<"ENTERS NUMBER "<<endl;
    for (int i = 0; i < 3; i++)
    {
        for(int j = 0;j<3;j++)
        {
            cin>>arr[i][j];
             brr[j][i] = arr[i][j];


        }
    }
    for (int i = 0; i < 3; i++)
    {
        for (int j =0; j < 3; j++)
        {
            cout<<arr[i][j]<<"  ";
        }
        cout<<endl;
        
    }

    cout<<"TRANSPOSING MATRIX ="<<endl;
    for (int i = 0; i < 3; i++)
    {
        for (int j =0; j < 3; j++)
        {
            cout<<brr[i][j]<<"  ";
        }
        cout<<endl;
        
    }
    
    

return 0;
}