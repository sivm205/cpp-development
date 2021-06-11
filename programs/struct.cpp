#include<iostream>
using namespace std;
struct college_stud
{
   int stud_id;
   string stud_name;
   string stud_branch;
   float year;
}em;

int main()
{

    em.stud_id = 190374;
    em.stud_name = "shivam mishra";
    em.stud_branch = "cse";
    em.year = 2023;
    cout<<"student id is \n"<<em.stud_id<<endl;
        cout<<"student name  is \n"<<em.stud_name <<endl;
        cout<<"studen branch name is\n"<<em.stud_branch<<endl;
        cout<<"student studies is year\n"<< em.year<<endl;
        return 0;


}