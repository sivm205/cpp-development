#include<iostream>
using namespace std;
int main()

{ const int num = 10;
int i;
    int arr[num] = {'a','b','c','d','e','f','g','h','i','j'};
   cout<<"characters \t\t\t";
   cout<<"ascii value\n";
   cout<<"________\t\t"<<"_________\n";
   for (i=0;i<num;i++)
   {
       cout<<arr[i]<<"\t\t\t\t"<< (int)arr[i]<<endl;
   }

}