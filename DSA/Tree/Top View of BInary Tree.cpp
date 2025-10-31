#include<bits/stdc++.h>
using namespace std;

class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = nullptr;
        right = nullptr;
    }
};


class Solution {
  public:
    vector<int> topView(Node *root) {
        if(root == nullptr) return {};

        unordered_map<int, int>mp;
        queue<pair<Node*, int>>q;

        int mn = INT_MAX;
        q.push({root, 0});
        while(!q.empty()){
            auto fN = q.front();
            q.pop();
            
            Node* temp = fN.first;
            int d = fN.second;
            mn = min(mn, d);

            if(mp.find(d) == mp.end()){
                mp[d] = temp->data;
            }

            if(temp->left){
                q.push({temp->left, d-1});
            }

            if(temp->right){
                q.push({temp->right, d+1});
            }
        }
        vector<int>res(mp.size());
        for(auto it= mp.begin(); it!=mp.end(); it++){
            res[it->first - mn] = (it->second);
        }
        return res;
    }
};

int main() {
    Solution obj;
    
    // Create a sample binary tree
    //       1
    //     /   \
    //    2     3
    //   / \   / \
    //  4   5 6   7
    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    vector<int> res = obj.topView(root);
    
    // Print the top view
    cout << "Top view of the binary tree: ";
    for(int val : res) {
        cout << val << " ";
    }
    cout << endl;

    // Free allocated memory
    delete root->left->left;
    delete root->left->right;
    delete root->right->left;
    delete root->right->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}