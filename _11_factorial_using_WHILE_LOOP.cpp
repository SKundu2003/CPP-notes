#include <iostream>

using namespace std;

int main()
{
    int num = 7;
    int factorial=1;
    int i=1;
    while (i<=num)
    {
        factorial = factorial*i;
        i++;
    }
    cout << "factorial is:" << factorial<<endl;
    return 0;
}


