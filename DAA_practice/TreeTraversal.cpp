#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

        Node(int data){
            this->data=data;
            this->left=nullptr;
            this->right=nullptr;
        }
};

void Preorder(Node* root){
    //Node->left->right
    if(root==nullptr){
        return;
    }
    cout<<root->data;
    Preorder(root->left);
    Preorder(root->right);
}
void Inorder(Node* root){
    //left->node->right
    if(root==nullptr){
        return;
    }

    Inorder(root->left);
    cout<<root->data;
    Inorder(root->right);
}

void Postorder(Node* root){
    //left->right->node
    if(root == nullptr) return;
    Postorder(root->left);
    Postorder(root->right);
    cout<<root->data;
}


int main(){

    // Tree Diagram : 
    /*     1
       2       3
     4   5   6   7
    */
    Node *root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left= new Node(6);
    root->right->right = new Node(7);

    cout<<"Inorder Traversal:"<<endl;
    Inorder(root);
    cout<<endl;

    cout<<"Preorder Traversal:"<<endl;
    Preorder(root);
    cout<<endl;
    
    cout<<"Postorder Traversal:"<<endl;
    Postorder(root);
    cout<<endl;

    return 0;
}

