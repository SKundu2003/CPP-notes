#include<iostream>

using namespace std;

// we can also creat "void" function,if the function return nothing
int sum(int num1,int num2); //here "int num,num2" -->are the parameter //this is cald function prototype
//int sum(int,int); //also working
int main()
{
    int number1=10,number2=20;
    
    int return_value = sum(number1,number2); //here the "number1,number2" ->is the argument //function call
    cout<<"the sum is "<<return_value<<endl;
    return 0;
}
int sum(int num1,int num2)
{
    int plus_sum = num1 + num2;
    return plus_sum; // if the function return nothing then we dont want to return anything
}