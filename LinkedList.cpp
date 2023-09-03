#include <iostream>
using namespace std;

class Node{

    public:
    int data;
    Node * next;

    Node(int data){
        this->data=data;
        this->next=NULL;
    }

    ~Node(){

        int value = this -> data;

        if(this->next!=NULL){
            delete next;
            this->next=NULL;
        }
    }
};



void InsertAtStart(Node * &head , int d){

    Node * temp = new Node(d);
    temp->next=head;
    head=temp;
}

void InsertAtEnd(Node * &tail, int d){

    Node * temp = new Node(d);
    tail->next=temp;
    tail=temp;

}

void print(Node* &head) {

    if(head == NULL) {
        cout << "List is empty "<< endl;
        return ;
    }
    Node* temp = head;

    while(temp != NULL ) {
        cout << temp -> data << " ";
        temp = temp -> next;
    }
    cout << endl;
}

int main() {
    
  
    Node* node1 = new Node(10);
    
    //head pointed to node1
    Node* head = node1; 
    Node* tail = node1;

    

    InsertAtStart(head, 62);
    InsertAtEnd(tail,2);
    InsertAtStart(head, 152);
    InsertAtEnd(tail,6);
    InsertAtStart(head, 42);
    InsertAtEnd(tail,7);

    return 0;

    print(head);

}