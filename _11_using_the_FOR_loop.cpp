#include<iostream>
using namespace std;

int main()
{
    int num;
    cout<<"enter how many number of times you want to exicute it::"<<endl;
    cin >> num;
    /*for (int i = 0; i < num; i += 1) // the exprecion are writen here
    {
        cout <<"test"<<endl; //run this code until the exprecion became false
    }*/
    
    // check the number is prime or not
    for (int i = 2; i < num; i++)
    {
        if (num%i==0)
        {
            cout << "the number "<<num<< " is non prime"<<endl;
            break;
        }
        else
        {
            cout << "the number "<<num<<" is prime"<<endl;
            break;
        }
    }   
    return 0;
}