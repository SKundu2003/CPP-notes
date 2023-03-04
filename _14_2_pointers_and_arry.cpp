#include<iostream>
 
using namespace std;
//tips --> array is a constant pointer
//tips --> pointer reduce the execution time, so the program run faster
int main()
{
    char grade[5] = {'a','b','c','d','e'};
    char *ptr;
    ptr = grade; //here we dont use '&' , because array is a constant pointer 
    // "grade" -->this array already stores the first element of the array which is "a".
    for (int i = 0; i < 5; i++)
    {
        cout<<"the value in grade["<<i<<"] array:-"<<*ptr<<endl;// if we write only "ptr" --> it will return garbage value
        ptr++; // this will incrise the value of ptr.so first,it points grade[0],then is points grade[1]. 
    }
    cout<<endl;

//we can also use array like that, BUT --> it is a slower process than POINTERS
    for (int i = 0; i < 5; i++)
    {
        cout<<"the value in grade["<<i<<"] array:-"<< grade[i] <<endl; 
        cout<<"the value in grade["<<i<<"] array:-"<< i[grade] <<endl; //this is also a way but not mandatory
    }
    system("pause");
    
    return 0;
} 