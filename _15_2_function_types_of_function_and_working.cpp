/*Types of function
1.No argument and no return value
2.with argument but no retuen value
3.No argument but return value
4.with argument and return value */
#include<iostream>

using namespace std;
void print(string val) //No argument and no return value -->so we use "void"
{
    // cout<<"this is a No argument and no return value type function"<<endl;
    cout<<val<<endl;
}

int main()
{
    print("hello world");
}