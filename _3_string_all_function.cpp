#include<iostream>
#include<algorithm> //to use "sort" function
#include<cstring> //this is importent for string usage
using namespace std;

int main()
{
    string str = "hello world test";
    string str3 = "hack";
    //5 importent functions :- -->works only with arrays -->str[10] ={souvik};
// substr()--> to find out a sub-string or a word from a sentence or string
    string word_find = str.substr(6,5); //from 6th character(' ') to 5 character('d')->after 6th character will show
    cout<<"the substring is :- " <<word_find<<endl;
// strcat_s()--> this will combine two strings //not importent-->only works on character array type string "str[10]" 

//strcmp() -- this will compare 2 strings-->only works on character array type string "str[10]" 
   /* int result;
    result = strcmp(str,str3);
    cout<<"the result is  :-"<<result<<endl; */ // if both strings are equal it will show = '0'.. but if it showes other value then strings are not equal; 
//strcpy_s() --> "strcpy_s(str2,str1)" -->this function will copy the value of 'str1' in 'str2'

    double size1 = str.size(); // to know the lenth or the size of the string.
    //we can also use -->"str.length()"
    cout<< "the size of the string is "<<size1 <<endl;
    cout << str << endl;
    string str2;
    long double size2 = str2.max_size(); // to know the maximum lenth can be store as a sting
    cout <<"the maximum lenth of the string is "<< size2 << endl;
    int search = str.find("world",0); //this will find the word ,0 -> represents the element the compiler start finding the word.
    cout << "the word starts from "<<search<<" character" << endl;
    str[12] = 'x';  // change character "t" -> to "x" // ->12 is the base number of the characater  
    cout << str << endl;
    str.clear(); // this will delete evert thing in the "str" string
    cout << str << endl;
 
    char character='A'; //using this keyword we can store only one character.
    // the character shuld be in '' -->single invitedcoma.
    cout<<"the character is :- "<<character<<endl;



//some aditional functions in string

    string str = "hello world";
    string sub_str = str.substr(6,5); //to creat a sub string // 6 index to start //5 number of characters
    cout<<sub_str<<endl;

    //type casting

    string num = "69";
    int number = stoi(num); //string to integer
    number += 10; //adding 10 to see is it really converted 
    cout<<number<<endl;

    num = to_string(number);//integer to string converction
    cout<<num+"10"<<endl; //adding 10 to show it is really a string




    //most importent for DSA
    string sorting_string = "akhiufiugiagi";
    sort(sorting_string.begin(),sorting_string.end());//this will sort the string  //and also change string permanently
//  string.begin() --> starting index of string
//  string.end() -->ending index of string
    cout<<sorting_string<<endl;


// using the "transform" -functiopn for upper case and lower case


    string str = "hello world";
    transform(str.begin(),str.end(),str.begin(), ::toupper); //2nd time str.begin to say from whare to start uppercase
    cout<<str<<endl;
    transform(str.begin(),str.end(),str.begin(),::tolower); // convert in to lower case
    cout<<str;

    //maximum number that can me made from a string
//or
//sorte a string in decrising order

    string str ="98873465436";
    // sort(str.begin(),str.end()); // this will treat this string as a integer

    //but if we want to sort string in decrising order

    sort(str.begin(),str.end(),greater<int>()); //sort the string from bogger to lower
    cout<<str;
    return 0;
}