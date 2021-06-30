//referencing variable
#include<iostream>
using namespace std;
int swap(int x, int y)
{
    int temp = x;
    x = y;
    y = temp;

    return 0;
}

int swap_ref(int &x,int &y)
{
    int temp = x;
    x = y;
    y = temp;
    return 0;
}

int main()
{   int x = 10 ,y= 15;
    cout<<"without refrencing variable"<<endl;
    swap(x,y); // this will not gonna give the desired output
    cout<<x <<endl<<y<<endl;
                         //as both the actual and formal varable are scope and have different memory location so changing in one dosent let to change 
                                  // in other variable 
    cout<<"after swaping with the referencing variable"<<endl;
    swap_ref(x,y);
    cout<<x <<endl<<y<<endl;


return 0;
}
