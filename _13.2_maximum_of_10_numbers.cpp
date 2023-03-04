#include<iostream>

using namespace std;

int main()
{ 
    int arr2[10];
    int num , maximum = 0;
    cout<<"how many numbers you want to input"<<endl;
    cin>>num;
    cout<<"please enter"<<num<<"numbers"<<endl;

    for (int i = 0; i <num ; i++)
    {
        cin>>arr2[i];
        if (arr2[i]>maximum)
        {
            maximum = arr2[i];
        }
    }
    cout<<"the maximum number is:-"<<maximum<<endl;
    system("pause");
    return 0;
}

