#include <iostream>

using namespace std;

int change(int &a, int &b) // --> in this function "&a" and "&b" stores the address of the variable 
//we can also use pointers "*" for-->"&" like "*a" or "*b"
{
    a = 10; //the value of 'a' updated or change because it call by reference
    b = 30; // same
}

// call by reference using pointers

//SWAPING 2 NUMBERS:-
int swap(int *a, int*b)
{
    int num;
    num = *a;
    *a = *b;
    *b = num;
}
int main()
{
    int num1 = 10,num2 = 5;
    cout<<"abefore function call the values are :- "<<num1<<" "<<num2<<endl;
    // change(num1,num2);
    swap(&num1,&num2);
    cout<<"After function call the values are :- "<<num1<<" "<<num2<<endl;
    return 0;
}
