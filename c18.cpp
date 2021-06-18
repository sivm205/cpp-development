// do while program
#include<iostream>
using namespace std;
int main()
{
    int last_stair = 10;
    int x = 0;
    static int count;
    do
    {
        x+=1;
        cout<<"one step ahead"<<endl;
        count++;
    } while (x<last_stair);

    if(x==last_stair)
    {
        cout<<"finally we reached our destination"<<endl;
    }
    cout<<"\n\n"<<"times loop are run is"<<endl<<count<<endl;
    
return 0;
}