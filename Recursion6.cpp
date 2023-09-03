#include<iostream>
using namespace std;

bool isSorted(int *arr , int n){

    if (n==0 ||n==1){
        return true;
    }

    if(arr[0] > arr[1]){
        return false;
    }

    else{
        bool Remain=isSorted(arr+1, n-1);
        return Remain;
    }
}

int main(){

    int arr[5]={1,4,5,5,32};
    int n=5;

    bool ans=isSorted(arr, n);

    if(ans){
        cout<<"sorted"<<endl;
    }

    else{
        cout<<"Not sorted"<<endl;
    }
}