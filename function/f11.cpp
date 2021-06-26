//printing a table by user input
#include<iostream>
inline int table(int num)
{
    int res = 0;
    for(int i = 1;i<=10;i++)
    {
        res = num*i;
       std:: cout<<num <<"*"<<i<<"="<<  res<< std:: endl;
    }
    return 0;
}
int main()
{
    std::cout<<"enter the number to print a table"<<std::endl;
    int num;
    std::cin>>num;
    int call = table(num);

return 0;
}