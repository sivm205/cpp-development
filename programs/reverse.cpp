 #include<iostream>
 using namespace std;
 int main()
 {
     int arr[10] ,i,j,num;
     cout<<"enter the total number of array\n";
     cin>>num;
     cout<<"enter the element\n";
     for(i=0;i<num;i++)
     {
         cin>>arr[i];
     }
   for(i=num-1;i>0;i--)
   {
    cout<<arr[i]<<endl;
   }
     
     return 0;
 }