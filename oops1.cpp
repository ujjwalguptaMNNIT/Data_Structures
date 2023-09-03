#include<iostream>
using namespace std;

class Hero{

    public:
    int health;
    char level;

    void print(){

        cout<<level<<endl;
    }
};

int main(){


    //similar to int ramesh;
    Hero ramesh;

    //set values
    ramesh.health=100;
    ramesh.level='A';

    cout<<ramesh.health<<ramesh.level;


    
}