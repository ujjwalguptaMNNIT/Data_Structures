#include <iostream>
using namespace std;

void printArray( int arr[], int size){
    cout<<"Printing"<<endl;
    for(int i=0 ; i < size ; i++){
        cout<<arr[i]<<endl;
  
    }
    cout<<"Done"<<endl;
}

bool LSearch(int arr[], int size, int key){
    for (int i=0; i<size; i++){
        if ( arr[i]==key){
            cout<<"found";
        }
        else{
            cout<<"not found";
        }
    }
    return 0;
}

int main(){
    int one[7]={1,2,45,76,2,0,-1};
    int size=7;
    printArray(one,7);
    LSearch(one,7,778);
}

