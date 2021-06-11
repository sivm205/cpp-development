#include<iostream>
using namespace std;

void displaymsg() // <-----function header or function daclaration
{
    cout<<"hello this is written in the user defined function\n";

}
void displaymsg1();
int main()
{
    cout<<"calling from the main function\n";
    displaymsg();
    displaymsg1();
    return 0;
    
}

void displaymsg1()
{
    cout<<"printing through function defiation\n";
}