#include<iostream>
using namespace std;


class Node{
    public:
    int data;
    Node* left;
    Node* right;

    Node(int data){
        this -> data =d ;
        this -> left= NULL;
        this -> right= NULL;

    }
    
    Node * buildNode(node * root){

        int d;
        cin>>d;

        root = new Node(d);


        if (data==-1){
            return NULL;
        }

        cout<<"enter left value"<<data<<endl;
        root -> left= buildNode(root -> left);
        cout<<"eneter right value"<<data<<endl;
        root -> right = buildNode(root -> right);

    }

void inorder(node * root){

    inorder(root->left);
    cout<<root ->data<<" ";
    inorder(root->right);
}

void preorder(node * root){

    cout<<root ->data<<" ";
    preorder(root->left);
    preorder(root->right);
}


void postorder(node * root){

    postorder(root->left);
    postorder(root->right);
    cout<<root ->data<<" ";
}
void levelOrderTraversal(node* root) {
    queue<node*> q;
    q.push(root);
    q.push(NULL);

    while(!q.empty()) {
        node* temp = q.front();
        q.pop();

        if(temp == NULL) { 
            //purana level complete traverse ho chuka hai
            cout << endl;
            if(!q.empty()) { 
                //queue still has some child ndoes
                q.push(NULL);
            }  
        }
        else{
            cout << temp -> data << " ";
            if(temp ->left) {
                q.push(temp ->left);
            }

            if(temp ->right) {
                q.push(temp ->right);
            }
        }
    }

}


}
int main(){

    node * root = NULL;

    buildNode(root);
    levelOrderTraversal(root);
    // 1 3 5 7 11 17 -1 -1 -1 -1 -1 -1 -1

    
    //creating a Tree
    root = buildTree(root);
    //1 3 7 -1 -1 11 -1 -1 5 17 -1 -1 -1 
    //level order
    cout << "Printing the level order tracersal output " << endl;
    levelOrderTraversal(root);

    cout << "inorder traversal is:  ";
    inorder(root); 

    cout << endl << "preorder traversal is:  ";
    preorder(root); 

    cout << endl << "postorder traversal is:  ";
    postorder(root); 


    return 0;
}
