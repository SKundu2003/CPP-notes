#include<iostream>

using namespace std;
int num = 20; // global variable

int main()
{
    int num = 10; //define the same name to the local variable and the global variable
    // in the "main()" function the local valiable get the preference
    cout<<"the value of local variable is:-"<<num<<endl;

    cout<<"to see the value of global variable we have to use ""::"" operator"<<::num;

  //******typrcasting*********
    int a = 50;
    float b = 45.2222;
    cout<<"the typecasted value is - "<<(float)a<<endl; //this will convert integer 'a' in to a floating point number
    cout<<"the typecasted value is - "<<(int)b<<endl; //this will convert floating point number 'b' into integer 'b' 

  //******* constant variable******
  int variable = 20; //if we dont constant it then we can change the value 
  cout<<"before value:-"<<variable<<endl;
  variable = 30;
  cout<<"after value:-"<<variable<<endl;
  //but if we constant a variable then it will be secure
  const int variable2 = 50;//it will be fixed
  variable2 = 10000; //we cant change the value
  cout<<"the value is:-"<<variable2<<endl;   
  return 0;
}   