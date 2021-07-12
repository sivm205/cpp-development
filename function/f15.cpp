//pointer with array
#include<iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50};
    int *ptr ;
    ptr = arr;// ptr are also pointing to the same location with the array

    cout<<"_____________________________________________pointe with array__________________________________________________\n";
    cout<<"THROUGH PTR VARIABLR THE VALUE IS=  "<<*ptr<<endl;
    cout<<"AND ADDRESS OF PTR IS =  "<<ptr<<endl;

    cout<<"THORUGH THE ARRAY VARIABLE=  "<<*arr<<endl;
    cout<<"AND THE ADDRESS IS =  "<<arr<<endl;

    cout<<endl<<"YOU WILL FIND THAT ARRAY VARIABLE IS ALSO TREAT AS A POINITER VARIABLE THAT STORES\nTHE ADDRESS OF A 0TH INDEX ELEMENT OF ARRAY";
    cout<<endl<<endl<<endl<<"pointer with arithmatic"<<endl;

    cout<<"_____________________________________________pointe with arithmatic__________________________________________________\n";
   
    ptr = ptr+1;
    //increament by one but it will move forward 4 byte as pointer is of int data type and int takes 4 byte of storage

    cout<<"AFTER INCREAMENTING ONE ="<<*ptr<<endl;
    cout<<"AND ADDRESS PART AFTER INCREAMENTING IS="<<ptr<<endl;

    //but we can do arithmatic operation with the original variable

    ptr = ptr+3;
    cout<<"AFTER INCREAMENTING 3 PLACE FROM THE CURRENT POSSITION ="<<*ptr<<endl;
    cout<<"ADDRESS OF CURRENT LOCATION IS ="<<ptr<<endl;


    //accressing array element through pointer 
    int *var = arr;
    for(int i=0;i<5;i++)
    {
        cout<<*var+i<<" "; //    (*) is important as it points to the value otherwise varible will print adddress part
    }    


   

return 0;
}