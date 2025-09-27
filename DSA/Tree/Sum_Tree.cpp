#include<bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node* left, * right;
}; 

class Solution {
  public:
    pair<bool, int>isSumChecker(Node* root){
        if(root == nullptr){
            return {true, 0};
        }
        if(root->left == nullptr && root->right == nullptr){
            return { true, root->data};
        }

        auto left = isSumChecker(root->left);
        auto right = isSumChecker(root->right);

        bool isSumtree = left.first && right.first && (root->data == left.second + right.second);
        int sum = root->data + left.second + right.second;
        return {isSumtree, sum};
    }

    bool isSumTree(Node* root) {
        return isSumChecker(root).first;
        
    }
};

int main(){
    Solution obj;
    Node* root = new Node{26, nullptr, nullptr};
    root->left = new Node{10, nullptr, nullptr};
    root->right = new Node{3, nullptr, nullptr};
    root->left->left = new Node{4, nullptr, nullptr};
    root->left->right = new Node{6, nullptr, nullptr};
    root->right->right = new Node{3, nullptr, nullptr};
    if(obj.isSumTree(root)){
        cout<<"It is a Sum Tree"<<endl;
    }
    else{
        cout<<"It is not a Sum Tree"<<endl;
    }
    return 0;

}