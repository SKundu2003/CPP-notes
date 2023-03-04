#include<iostream>
#include<cmath>
using namespace std;

int main()
{
    double num1 = 10;
    double num2 = 11;
    double num3 = 13.58;
    double num4 = 25;
    double sum = (num1+num2);
    double minimum = min(num1,num2); // this will find the minimum     number in 2 given numbers
    double maximum = max(num1,num2);// this will find the maximum number in 2 given numbers
    double small_compleat = floor(num3); // this will show the smallest compleat(int)- number of a variable(13.58)
    double high_compleat = ceill(num3); // this will show the highest compleat(int)- number of a variable(13.58)
    double just_round = round(num3);   //rounf function will just round the number to the closest one
    double power = pow(num1,2);       //pow --> power of a variable, num1 is = 10,and-> "2" is the power  
    double square_root = sqrt(num4); //"sqrt" --> to know the square root value of a number.


    cout<<"the sum is :-"<< sum <<endl;
    cout<<"the minimum number is :-"<< minimum <<endl;
    cout<<"the maximum number is:-"<< maximum <<endl;
    cout<< "\n\tthe number is :-"<< num3<< endl;
    cout<< "\tthe smallest compleat(int)- number::--"<< small_compleat << endl;
    cout<< "\nthe number is :-"<< num3<< endl;
    cout<< "the highest compleat(int)- number::--"<< high_compleat <<endl;
    cout<< "\n\tthe number is :-"<< num3<< endl;
    cout<< "\tthe rounded number::--"<< just_round << endl;
    cout<< "\nthe number is :-" << num1<<endl;
    cout<< "power of 10 is:-"<< power<<endl;
    cout<< "\n\tthe square root of:-"<< num4 <<endl;
    cout<<"\tsquare root is::--"<< square_root <<endl;
    system("pause");
    return 0;
}