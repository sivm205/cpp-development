//passeing an array as a argument in function
/*At some point, we may need to pass an array to a function as a parameter. In C++, it is not possible to pass the entire block of memory represented by an array to a function directly as an argument. But what can be passed instead is its address. In practice, this has almost the same effect, and it is a much faster and more efficient operation.

To accept an array as parameter for a function, the parameters can be declared as the array type, but with empty brackets, omitting the actual size of the array. For example:
*/
#include<iostream>
using namespace std;
int passarray(int arg[],int size)
{
    for(int i=0;i<size;++i)
    {
        cout<<arg[i]<<endl;
        return 0;
    }
}
int main()
{
    
    int array[] = {1,2,4,5,6,7,8,9,0} ;
    passarray(array,10);

} 

/*#include <iostream>
using namespace std;

void printarray (int arg[], int length) {
  for (int n=0; n<length; ++n)
    cout << arg[n] << ' ';
  cout << '\n';
}

int main ()
{
  int firstarray[] = {5, 10, 15};
  int secondarray[] = {2, 4, 6, 8, 10};
  printarray (firstarray,3);
  printarray (secondarray,5);
}*/