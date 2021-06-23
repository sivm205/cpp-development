#include<iostream>
using namespace std;
 void msg2()
    {
        cout<<"hope everything is fine and okay"<<endl;
        
    }
void msg1()
    {
        cout<<"hello User!!"<<endl;
        msg2();
    }
   
    int main()
    {
        msg1();
        cout<<"okay now its time to say goodbye";
        cout<<"see yaaa!!!"<<endl;
        
    
return 0;
}