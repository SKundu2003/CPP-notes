#include <iostream>

using namespace std;

//structure:- to combine deferent types of datatypes

/*typedef struct employ //using the keyword "typedef" we can creat a shortcut of this "struct employ" datatype
{
    int id;
    char favchar;
    float salary;
}ep;*/ //and here "ep" is the short cut name
struct employ
{
    int id;
    char favchar;
    float salary;
};
int main()
{
    /* ep test; //this is the short cut process to creat a variable*/
    struct employ test; //creat a "employ" type variable cald-->"test" //just like that we can creat many varyable
    test.id = 1234;     //"." -->'.' dot is member adding operator
    test.favchar = 'a'; //using '.'-> dot we store the value in the variable
    test.salary = 4000000;
    cout << "the value is :- " << test.id << endl;
    cout << "the value is :- " << test.favchar << endl;
    cout << "the value is :- " << test.salary << endl;
    return 0;
}