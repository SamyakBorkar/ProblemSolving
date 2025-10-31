#include<bits/stdc++.h>
using namespace std;

/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    vector<vector<int>> verticalOrder(Node *root) {
        map<int, vector<int>>nodes;
        queue<pair<Node*, int>>q;

        q.push({root, 0});
        while(!q.empty()){
            auto frontNode = q.front();
            q.pop();
            Node* curr = frontNode.first;
            int horizontalDistance = frontNode.second;

            nodes[horizontalDistance].push_back(curr->data);

            if(curr->left){
                q.push({curr->left, horizontalDistance-1});
            }
            if(curr->right){
                q.push({curr->right, horizontalDistance+1});
            }
        }
        vector<vector<int>>res;
        for(auto it: nodes){
            res.push_back(it.second);
        }
        return res;
    }
};

