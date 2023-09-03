//pointer with array

#include<iostream>
using namespace std;

int main () {
    int arr[10]={1,2,5,4};

    cout<<"address at first index"<<arr<<endl;
    cout<<"address at first index"<<&arr[0]<<endl;
    cout<<"address at first index"<<&arr<<endl;

    cout<<"element at first index"<<arr[0]<<endl;
    cout<<"element at first index"<<*arr<<endl;
    // cout<<*arr[0] <<endl;

    cout << "4th "<< *arr << endl;
    cout << "5th " << *arr + 1 << endl;
    cout << "6th " << *(arr + 1) << endl;
    cout << "7th " << *(arr) + 1 << endl;
    cout << "8th " << arr[2] << endl;
    cout << "9th " << *(arr+2) << endl;

    return 0;

}