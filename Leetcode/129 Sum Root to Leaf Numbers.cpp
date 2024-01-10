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
public:
    int help(TreeNode* root,int n){
        if(root==NULL) return 0;
        n = n*10 + (root->val);
        if(root->left==NULL && root->right==NULL) return n;
        return help(root->left,n) + help(root->right,n);
    }
    int sumNumbers(TreeNode* root) {
        return help(root,0);
    }
};
