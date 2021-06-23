#include<iostream>
using namespace std;

//circumference of circle 
int crcm_crcl(int rad)
{
    const int pi = 3.14;
    return pi*rad*2;
}

//getting maximum of three number 
int get_max(int num1 ,int num2 ,int num3)

{
    if(num1 >num2 && num1 >num3)
    {
        return num1;
    }
    else if (num2>num1 && num2 >num3)
    {
        return num2;
    }
    else{
        return num3;
    }
}

//check prime or not
int check_prime(int a)
{
    static int count;
    for(int i = 2;i<=(a/2);i++)
    {
        if(a%i ==0)
        count++;
    }
    if(count>=2)
    {
        cout<<"not an prime number"<<endl;
    }
    else
    {
        cout<<"yes it is prime number"<<endl;
    }
}

//checking even  number or odd number
int check_even(int n)
{
    if(n%2==0)
    {
        cout<<"yes given number="<<n<<" is even "<<endl;

    }
    else
    {
        cout<<"given number is ="<<n<<" is odd"<<endl;
    }
}

//checking eligibility for voting 
 int check_vote(int age)
{
    if(age<18)
    {
        cout<<"sorry you are not eligible for vote"<<endl;
    }
    else{
        cout<<"yess you are eligible"<<endl;
    }
}

int main()
{
    int num1,num2,num3,res;
    cout<<"your options for various operations listed below"<<endl;
    cout<<"_______________________________________________________________________________"<<endl;
    while(true)
    {
    cout<<"1.getting maximum of three number\n2.check even number \n3.check wheather a number is prime or not \n4.get the circumference of circle\n5.check you are eligible for vote or not\n6.for exit "<<endl;
    int option;
    cin>>option;
    switch (option)
    {
        case 1:
        cout<<"enter the three number one by one"<<endl;
        cin>>num1>>num2>>num3;
        cout<<get_max(num1,num2,num3)<<endl;
        break;

        case 2 :
        cout<<"enter the number "<<endl;
        cin>>num1;
        cout<<check_even(num1)<<endl;
        break;

        case 3:
        cout<<"enter the number to get it is prime or not "<<endl;
        cin>>num1;
        cout<<check_prime(num1)<<endl;
        break;

        case 4:
        cout<<"enter the radius to get the circumcumference of circle"<<endl;
        cin>>num1;
        cout<<"circumference of circle is = "<<crcm_crcl(num1);
        break;

        case 5:
        cout<<"enter your age to check the eligibility"<<endl;
        cin>>num2;
        cout<<check_vote(num2)<<endl;
        break;

        case 6:
        exit(0);
        break;
        
        default:
        cout<<"sorry try again!!!!";


    }
    }
return 0;
}