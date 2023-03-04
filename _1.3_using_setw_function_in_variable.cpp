#include <iostream>
#include<iomanip>
using namespace std;

int main()
{
    int num1 = 1, num2 = 11, num3 = 1117;
    cout << "the view will be:-" << setw(4) << num1 << endl; //'setw()' function will right aling the value
    cout << "the view will be:-" << setw(4) << num2 << endl;
    cout << "the view will be:-" << setw(4) << num3 << endl;
    return 0;
}