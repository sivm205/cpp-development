#include<iostream>
using namespace std;
int main()
{
    //first pointer and arrray
    int arr[100] ={1,2,3,4,5,6,7,8};
    int *ptr = arr; //pointer to the int array
    //stores the base address
    for (int  i = 0; i <10; i++)
    {
        cout<<*(ptr + i)<<" ";
        if(*(ptr +i) == 0)
        {
            break;
        }

    }
    cout<<endl;
    
    cout<<"(*ptr = arr)=  "<<*ptr<<endl;
    cout<<"array points to base address ="<<*arr<<endl;

    //arr++ ;// real array cant be modified like normal pointer it behave as a const pointer
    ptr++;
    cout<<"after incrementing ptr at one place="<<*ptr<<endl;
    cout<<"and arr still points to ="<<*arr<<endl;

    // *(arr+1 ) = arr[0]
    // *(arr+2) = arr[2]

    cout<<"*(arr +1) = "<<*(arr+1)<<endl;

    cout<<" arr[0] = 0[arr] "<<endl;
    cout<<arr[0]<<endl;
    cout<<"we can also access array element by ptr pointer\n"<<ptr[0]<<endl;
    for (int i = 0; i < 10; i++)
    {
        cout<<ptr[i]<<" ";
    }
     
     cout<<"\nagain ptr points back at base address\n";
    ptr = arr; //again initialized ptr to the base address 
    for (int  i = 0; i < 10; i++)
    {
        cout<<ptr[i]<<" ";
    }
    


    cout<<"\n_________________________________________________________\n";

    int num = 10;
    int const *p = &num; //constant pointer means *p cant be modified through the program it remain point to the num varibale
    cout<<"address of p and num respectively = "<<p <<' '<<&num<<endl;
    cout<<"*p = "<<*p<<endl;
    
    int var = 100;
  //   *p = &var;  throw an error pointing value cant be modiefied

       p = &var; // it will work as we change its address not the value 
    cout<<"value of *p now is = "<<*p<<endl;
     cout<<" p = &var "<<endl<<*p<<endl;
     cout<<"address of p now ="<<p<<endl;
     cout<<"address of var varibale is = "<<&var<<endl;

     cout<<"so we change the constant pointer through direct modification"<<endl;

     //note = we can not change pointing varibale if its declared as constant pointer

return 0;
}