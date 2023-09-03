#include<iostream>
using namespace std;


string reverse(string str , int i , int j){

    if(i>j){
        return str ;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    reverse(str, i , j);
}





int main(){
    string name="ujjwal";
    cout<<endl;
    string newname=reverse(name, 0, name.length()-1 );
    cout<<endl;
    cout<<"new is"<<newname<<endl;

    return 0;
}
