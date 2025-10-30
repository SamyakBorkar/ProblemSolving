/*
class Node {
  public:
    int data;
    Node* left;
    Node* right;

    // Constructor to initialize a new node
    Node(int val) {
        data = val;
        left = NULL;
        right = NULL;
    }
};
*/

class Solution {
  public:
    void traverseLeft(Node* root, vector<int>&ans){
        if((root == NULL) || (root->left == NULL && root->right ==NULL)){
            return;
        }
        ans.push_back(root->data);
        if(root->left)
            traverseLeft(root->left, ans);
        else
            traverseLeft(root->right, ans);
    }
    
    void printLeaf(Node* root, vector<int>&ans){
        if(root == NULL) return ;
        
        if(root -> left == NULL && root->right == NULL){
            ans.push_back(root->data);
            return;
        }
        printLeaf(root->left, ans);
        printLeaf(root->right, ans);
        
    }
    
    void traverseRight(Node* root, vector<int>&ans){
        if((root == NULL) || (root->left == NULL && root->right ==NULL)){
            return;
        }
        if(root->right)
            traverseRight(root->right, ans);
        else
            traverseRight(root->left, ans);
    
        ans.push_back(root->data);
    }
  
    vector<int> boundaryTraversal(Node *root) {
        vector<int>ans;
        
        if(root == NULL) return ans;
        ans.push_back(root->data);
        traverseLeft(root->left, ans);
        
        printLeaf(root->left, ans);
        printLeaf(root->right, ans);
        
        traverseRight(root->right, ans);
        
        return ans;
    }
};