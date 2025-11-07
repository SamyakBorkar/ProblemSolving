#include<bits/stdc++.h>
using namespace std;

class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int x) {
        data = x;
        left = right = nullptr;
    }
};

class Solution {
  public:
    vector<int> leftView(Node *root) {
        if(root == nullptr) return {};
        queue<Node*>q;
        vector<int>res;
        q.push(root);

        while(!q.empty()){
            int levelSize = q.size();
            
            for(int i=0; i< levelSize; i++){
                Node* curr = q.front();
                q.pop();

                if(i == 0){
                    res.push_back(curr->data);
                }

                if(curr->left){
                    q.push(curr->left);
                }
                if(curr->right){
                    q.push(curr->right);
                }
            }
        }
        return res;  
    }
};

int main() {
    // Create binary tree
    //    1
    //   / \
    //  2   3
    //     /
    //    4
    //     \
    //      5
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->right->left = new Node(4);
    root->right->left->right = new Node(5);
    Solution obj;
    vector<int> res = obj.leftView(root);
    for (int node : res)
        cout << node << " ";
}