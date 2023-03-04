#include<iostream>
using namespace std;

int main()
{
    /*string array1[]={"lucifer","devil","satan"};//this is a way to store a array
    cout <<"the first name is:-"<<array1[0]<<endl;*/
    // string array2[3]; // array also can be stored in this way 
    // array2[0] = "test1";
    // array2[1] = "test2";
    // array2[2] = "test3";
    // cout<< "the 2nd name is:-" << array2[1] <<endl;
    string array3[2];
    cout <<"enter 1st string:-"<<endl;
    getline(cin,array3[0]);
    cout<<"your string is:-"<<array3[0]<<endl;
    system("pause");
    return 0;  

}