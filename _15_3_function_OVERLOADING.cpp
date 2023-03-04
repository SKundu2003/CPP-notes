//Function Overloading : Function having the same name with different arguments.
// when we did more than one word in a function that is refers to function overloading
#include <iostream>

using namespace std;

int sum(int a, int b) //first sum function that has 2 argument
{
    return a + b;
}
int sum(int a, int b, int c) //secend sum functon that has 3 argument -->and this thing  deferenciate 2 or more functions
{
    return a + b + c;
}
int main()
{
    int num;
    int num1, num2,num3;
    int Return;
    cout << "how many numbers you want to enter 2 or 3 ??";
    cin >> num;
    if (num == 2)
    {
        cout << "enter 2 numbers:- ";
        cin >> num1 >> num2;
        Return = sum(num1, num2); // argument checked by the compiler argument
        cout << "the sum value is " << Return;
    }
    else if (num == 3)
    {
        cout << "enter 3 numbers:- ";
        cin >> num1 >> num2>>num3;
        Return = sum(num1, num2,num3); // argument checked by the compiler 3 arguments
        cout << "the sum value is " << Return<<endl;
    }
    return 0;
}