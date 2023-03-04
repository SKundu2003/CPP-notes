#include<iostream>

using namespace std;

int main()
{
    char grade;
    cout << "enter your grade"<< endl;
    cin >> grade;
    switch (grade)
    {
    case 'A':grade:
        cout << "good" <<endl;
        break;
    
    default:
        cout <<"invalid"<<endl;
    }
    return 0;
}