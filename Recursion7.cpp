#include<iostream>
using namespace std;

int getsum(int *arr , int n){

    if (n==0){
        return 0;
    
    }

    if (n==1){
        return arr[0];
    }

    int remain= getsum(arr+1 , n-1);
    int sum = arr[0]+remain;
    return sum;
}

int main(){

    int arr[5]={9,4,5,5,32};
    int n=5;

    int ans=getsum(arr, n);

    cout<<"ans"<<ans<<endl;
    return 0;
    
}