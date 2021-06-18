//scope variable
#include<iostream>
using namespace std;

//global scope 
int var1 = 100;
int main()
{
    //local scope inside the function body or any other code block
    int var1= 200;

    cout<<"the value of local varibale is"<<endl <<var1<<endl;
    //it print local variable first it execute within the main body then outside the body

    cout<<"the global variable is "<<::var1;
    //printing global varibale along with the local varible with the help of scope resolutor ::
return 0;
}