#include<iostream>
using namespace std;

class Hero{

    int health;
    
    public:
    char level;

    void print(){

        cout<<level<<endl;
    }


    int gethealth(){
        return health;
    }

    void sethealth(int h){
        health=h;
    }
};

int main(){
    //creation of object

    //similar to int ramesh;
    Hero ramesh;

    //set values
    ramesh.sethealth=70;
    ramesh.level='A';

    cout<<ramesh.gethealth()<<endl;
    cout<<ramesh.level<<endl;


    
}