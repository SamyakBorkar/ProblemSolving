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
    void InorderTraversal(TreeNode* root , int& sum, bool isLeft){
        if(root == nullptr) return ;
        InorderTraversal(root->left, sum, true);
        if(root->left == nullptr && root->right == nullptr && isLeft){
            sum+=root->val;
        }
        InorderTraversal(root->right, sum, false);
    }
public:
    int sumOfLeftLeaves(TreeNode* root) {
        int sum = 0;
        InorderTraversal(root, sum, false);
        return sum;
    }
};