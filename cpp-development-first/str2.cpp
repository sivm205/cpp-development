#include<iostream>
#include<string>
#include<cstring>
# define size 10
using namespace std;
int main()
{      // note := c string function always applied on char array as there were no string in the c 
        // string has its own function in string class in cpp 
/*
    char s1[size] = "HELLO";
    char s2[size] = "WORLD";
    char s3[size] ;
    int len;
    strcpy(s3 , s1);
    strcat(s1,s2);
    len = strlen(s1);
    cout<<"LENHTH OF THE S1 STRING ="<<len<<endl;
    */
 
  
/*      string str ("nobody does like this");
      string key ("nobody");
      size_t f;
      f = str.rfind(key);
      if (f != string::npos)
          str.replace (f, key.length(), "everybody");
      cout << str << endl;
      */

/*     char arr[20] = "shivam\0kumar\omishra";
     char str1[] = "shivam kumar mishra";
     cout<<"SIZE OF STR1 IS ="<<  sizeof(str1)   <<endl;
     cout<<  "SIZE OF SINGLE BYTE IS ="   << sizeof(str1[0])  <<endl;
    cout<< arr<<endl; */




    char name[] = "CoMPutER";
    for (int x = 0; x < strlen(name); x++)
        if (islower(name [x]))
            name [x] = toupper(name[x]);
        else
            if (isupper(name[x]))
                if (x % 2 == 0)
                    name[x] = tolower(name[x]);
                else
                    name[x] = name[x-1];

     cout << name;
    
     return 0;

return 0;
}