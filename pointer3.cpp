#include<iostream>
using namespace std;

int main () {
    int temp[10] = {1,2};
    cout<<temp<<endl;
    cout<<&temp<<endl;
    cout<<*temp<<endl;

   cout << "SIZE OF ENTIRE ARRAY:"<< sizeof(temp) << endl;
   cout << " SIZE OF DEREFERENCE =INTEGEER " <<  sizeof(*temp) << endl;
   cout << " SIZE OF POINTER " <<  sizeof(&temp) << endl;

   int *ptr = &temp[0];

   cout<<ptr<<endl;
   cout<<&ptr<<endl;
   cout<<*ptr<<endl;
   cout << sizeof(ptr) << endl ; //ADDRESS
   cout << sizeof(*ptr) << endl ; //VALUE

   cout << sizeof(&ptr) << endl ; //ADDRESS OF VALUE OF POINTER



//    int a[20] = {1,2,3,5};
//    //cout << " ->" << &a[0] << endl;
//   // cout << &a << endl;
//    //cout << a << endl;

//    int *p = &a[0];
//    //cout << p << endl;
//    //cout << *p << endl;
//    cout << "-> " << &p << endl;

   return 0;
}