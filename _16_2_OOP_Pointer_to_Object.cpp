#include <iostream>

using namespace std;

class retreangle // creat a class "retreangle" //class
{
    private: // every variable or function in "public:
    //only accesable in this class-->"retreangle"
        int a,b; // variables in object is called --> 
    //"a" & "b"--> can be accessable in this class.
    public: // every variable or function in "public:"

        int lenth , breth;  // variables in class is c
        int area() //function is class is called -->"M
        {
            return lenth * breth;
        }
        int perimeter() //function is class is called 
        {
            return 2*(lenth+breth);
        }
};

int main()
{
    int area,perimeter;
    retreangle ret1; //we created a "instance" or "obj
    //* only those functions and variables of "retrean
 
    ret1.lenth = 10; 
    ret1.breth = 20; 
    area = ret1.area(); 
    perimeter = ret1.perimeter(); 

    cout<<"the area is = "<<area<<endl;
    cout<<"the perimeter is = "<<perimeter<<endl;
    return 0;
}