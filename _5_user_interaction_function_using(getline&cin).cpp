#include<iostream>

using namespace std;

int main()
{
    string name;
    int age;
    cout<< " enter your name:-" <<endl;
    getline(cin,name); // "getline(cin,variable)"-> this function take string as an input from the user
    cout<< "hallo " << name<<endl;
    system("pause");
    cout<< "\t Enter your age";
    cin>>age; //"cin>>" -> this function take integer as an input from the user.
    cout<<"\t so your age is:-"<<age<<endl;
    return 0;
}