#include<iostream>
using namespace std;

int main () {
    int i = 8;
    int *t = &i;
   //cout <<  (*t)++ << endl;
   //1
   cout <<"before"<< *t << endl;
   *t = *t +1;
   cout <<"after"<< *t << endl;
   (*t)++;
   cout <<"after now"<< *t << endl;


   //2
   cout << " before t " << t << endl;
   t = t + 1;
   cout << " after t " << t << endl;


    //copying a pointer
   int *q = t;
   cout << t <<" - " << q << endl;
   cout << *t <<" - " << *q << endl;
   //1
   cout <<"before"<< *q << endl;
   *q = *q +1;
   cout <<"after"<< *q << endl;
   (*q)++;
   cout <<"after now"<< *q << endl;
}