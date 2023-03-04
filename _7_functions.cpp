#include<iostream>
#include<cmath>

using namespace std;

int function(int num1,int num2)
{
    // string name[2]={"test1","test2","test3"}; 
    // int num1=10 , num2 = 20;
    int sum = num1+num2;
    return sum;
} 
int main()
{
    int sum;
    int num1 = 10;
    int num2 = 20;
    sum = function(num1 , num2);
    cout<< "the sum value is:-"<<sum<<endl;
    return 0;
}