#include <iostream>

using namespace std;

namespace test
{
    void hello()
    {
        cout<<"this is a hello function"<<endl;
    }
    void function2()
    {
        cout<<"this is the second function"<<endl; 
    }
}

using namespace test; //no need scop-resoluction operator
int main()
{
    hello();
    test::function2(); //also can writen like that
    return 0;
}