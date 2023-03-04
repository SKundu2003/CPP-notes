#include <iostream>

using namespace std;

union employ //efecient for memory management,than structure
{
    int id; //only one can use at a time
    char favchar;                 //the highest memory datatype equal memory allocated
    float salary;                      //here "int" is highest 4 byte so memory allocated only 4 byte
};

int main()
{
    union employ souvik;
    souvik.id= 1234; //we can use only one 
    souvik.salary = 40000000; //don't work //only one can be used
    cout<<"the value is :- " <<souvik.id<<endl; //it will show garbage value.
    return 0;
}