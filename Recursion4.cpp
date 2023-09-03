#include<iostream>
using namespace std;

bool Palindrome(string str, int i, int j){
    if(i>j){
        return true;
    }
    if(str[i]!=str[j]){
        return false;
    }
    else{
        return Palindrome(str, i+1 , j-1);
    }
}

int main(){
    string name="mitin"
   

    bool Pali = Palindrome(name, 0, name.length()-1);

    if(Pali) {
        cout<<"yes";
    }

    else{
        cout<<"No";
    }

    return 0;
}
