/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
private:
    void postorder(TreeNode* node, vector<int>& res) {
        if (!node) return;
        postorder(node->left, res);      //left node 
        postorder(node->right, res);     //right node
        res.push_back(node->val);       //root node
    }
public:
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>res;
        postorder(root, res);
        return res;
    }
};