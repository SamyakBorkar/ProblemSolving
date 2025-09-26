#include <bits/stdc++.h>
using namespace std;

// Definition for a binary tree node.
struct TreeNode {
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution {
private:
    int ans = 0;
    int height(TreeNode* root) {
        if (root == nullptr) return 0;
        int left = height(root->left);
        int right = height(root->right);
        ans = max(ans, left + right);  // diameter update
        return max(left, right) + 1;   // height return
    }
public:
    int diameterOfBinaryTree(TreeNode* root) {
        height(root);
        return ans;
    }
};

int main() {
    // Example tree:
    //      1
    //     / \
    //    2   3
    //   / \
    //  4   5

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);
    root->left->right = new TreeNode(5);

    Solution sol;
    int diameter = sol.diameterOfBinaryTree(root);
    cout << "Diameter of the tree: " << diameter << endl;

    // Clean up memory
    delete root->left->left;
    delete root->left->right;
    delete root->left;
    delete root->right;
    delete root;

    return 0;
}