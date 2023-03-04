 #include<iostream>
#include<cmath>

using namespace std;
//tips --> array is a constant pointer
int main()
{
    // there are many Dimensional ARRY --> one Dimensional arry (int arr[10]) 
    // two Dimensional arry (int arr[10][5])--> 10 ROW ,5 COLOUM

    int arr1[10] = {1,2,3,4,5,6,7,8,9,10};//this is a one D array
    cout<<"the 3rd value is "<<arr1[2]<<endl;
    // also can writen like :-
/*for (int i = 0; i < 10; i++)
    {
        cout<<"enter the "<<i+1 <<"th number";
        cin>>arr1[i];
    }
    cout<<"which number array you want to see"<<endl;
    int j;
    cin>>j;
    cout << "the arrays value is"<<arr1[j]<<endl;*/

    int arr2[2][2] = {{1,2},{3,4}}; //this is a 2D array -->>if no value given it will take 0 as default
    cout<<"the value of 1st array is "<<arr2[0][0]<<endl; //it will sow 1


    return 0;
}




















