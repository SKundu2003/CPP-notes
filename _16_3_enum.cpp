#include <iostream>
// Enum in C++ is a data type that contains fixed set of constants.
using namespace std;
enum week
{
    Monday, //1st element
    Tuesday, //2nd element
    Wednesday, //3rd element
    Thursday,
    Friday,
    Saturday,
    Sunday
};
int main()
{
    week day;
    day = Friday; //this will show the element number
    cout << "Day: " << day + 1 << endl;
    return 0;
}