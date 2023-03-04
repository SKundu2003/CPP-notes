#include<iostream>

using namespace std;

int main()
{
    // int a;
    // int b = 10;
    // cout<< "enter your number:-" <<endl;
    // cin>>a; // user input as an integer
    // if (a>b||a==b) //using "||" -> and operator
    // {
        // cout<< "your number is bigger"<<endl;
    // }
    // /*else if (a==b)
    // {
        // cout<<"your number is equal"<<endl;
    // }*/
    // else
    // {
        // cout<<"your number is smaller"<<endl;
    // }


    //asking the user about his age
    string age;
    cout<<"hello user are you 18+:-"<<endl;
    // cout<<"wright yes or no:-"<<endl;
    getline(cin,age);
    if(age=="yes"||age=="YES")
    {
        cout<<"ok you are adult now"<<endl;
    }
    else{
        cout<<"on you are a kid now"<<endl;
    }
    return 0;
}