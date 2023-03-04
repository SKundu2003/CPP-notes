 #include<iostream>
 
 using namespace std;

 int main()
 {
    int *ptr;
    int N;
    ptr = &N;   //"ptr = N"-->this is incorrect
    //"&"--->address of operator
    //"*" -->de-referencing operator,or, value at operator also 
    N=10;
    cout<<"the value of N is:- "<<N<<endl; //this will print 10.
    cout<<"the address of num is :- "<<ptr<<" :-address always showes in hexadecimal"<<endl; // print address of num.
    cout<<"the value of num using pointer:-" <<*ptr<<endl;  //will print 10.
    cout<<"the address of N :-"<<&N<<endl; //also using this method we can see the address of "N" variable
    return 0;
 }