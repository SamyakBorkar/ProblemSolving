#include<bits/stdc++.h>
using namespace std;

class Node{
    public:
        int data;
        Node* left;
        Node* right;

    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

Node* buidTree(Node* root){
    cout<<"Enter the Data you Want to Insert:"<<endl;
    int data;
    cin>>data;
    root = new Node(data);

    if(data==-1){
        return NULL;
    }
    cout<<"Enter data you want to insert in left of: "<<data<<endl;
    root->left=buidTree(root->left);
    cout<<"Enter data you want to insert in right of: "<<data<<endl;
    root->right=buidTree(root->right);
    return root;
}

int main(){
    Node* root = NULL;
    root=buidTree(root);

}