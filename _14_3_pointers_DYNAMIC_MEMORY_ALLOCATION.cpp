// Dynamic Memory Allocation functions::- "new" and "delete"
#include<iostream>

using namespace std;
int main()
{
    int arr[1000]; //this will allocate a huge number of memory,and cause of wasting memory  
    int *ptr,num;
    int sum = 0;
    cout << "how many number you want to enter :-";
    cin >> num;
    ptr = new int[num]; //this will Dynamically Allocate Memory,during the run time
    for (int i = 0; i < num; i++)
    {
        cout<<"enter the "<<i+1<<"th number:- ";
        cin>>ptr[i];
    }
    for (int j = 0; j < num; j++)
    {
        sum = sum + ptr[j];
    }
    cout<<"the sum of your numbers are:-"<<sum<<endl;
    // delete ptr; // this will free the memory during the run time
    return 0;
}