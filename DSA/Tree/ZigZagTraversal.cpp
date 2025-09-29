#include<bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode() : val(0), left(nullptr), right(nullptr) {}
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
    TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
};
 
class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>>res;
        if(!root) return res;
        queue<TreeNode*>q;
        bool isLefttoRight = true;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            vector<int>numsV(n);
            
            for(int i=0; i<n; i++){
                TreeNode* temp = q.front();
                q.pop();
                
                int index = isLefttoRight? i: n-i-1;
                numsV[index] = temp->val;

                if(temp->left) q.push(temp->left);
                if(temp->right) q.push(temp->right);
            }
            res.push_back(numsV);
            isLefttoRight= !isLefttoRight;
        }
        return res;
    }
};

int main(){
    Node* root = NULL;
    root=buidTree(root);

}