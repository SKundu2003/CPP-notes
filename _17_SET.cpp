#include <iostream>
#include <set>
using namespace std;

int main()
{
    // set do not allow the duplication of data
    // save value cant be reppited in a set
    set<int> s;
    s.insert(1);
    s.insert(2);
    s.insert(2); // duplication of data //this will not insert in set
    s.insert(3);
    for (auto i : s) // traversal in the set //method 1
    {
        cout << i << " ";
    }
    cout << "another way" << endl;
    for (auto j = s.begin(); j != s.end(); j++)
    {
        cout << *j << " "; // here "j" is a pointer
    }

    cout << "\nprinting in reverse" << endl;
    // print the reverce
    for (auto i = s.rbegin(); i != s.rend(); i++) //"rbegin" & "rend"-->use to get the reverce begin and reverse end
    {
        cout << *i << " ";
    }
    cout << "this approch is not working " << endl;
    for (auto i = s.end(); i != s.begin(); i--) /// dont do that...//failed approch
    {
        cout << *i << " ";
    }

    // get the sixee of the set
    cout << "\nthe size of the set is " << s.size() << endl;

    // Code Custom Comparator
    set < int, greater<int>> s1;
    s1.insert(3);
    s1.insert(1);
    s1.insert(2);
    s1.insert(2);
    // printing the element in the set 
    cout<<"\nprinting the elements from higher to lower\n";
    for (auto i : s1)
        cout << i << " ";
    cout << "\n";

    // get lower and upper bound
    cout<< "\ngeting the upper and lower bound" << endl;
    set<int> s2;
    s2.insert(1);
    s2.insert(3);
    s2.insert(5);
    cout << *s2.lower_bound(2) << "\n";
    cout << *s2.lower_bound(3) << "\n";
    cout << *s2.upper_bound(3) << "\n";
    cout << (s.upper_bound(5) == s.end()) << "\n";
}