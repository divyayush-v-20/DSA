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
    void fill(TreeNode* root,vector<int>& tree){
        if(root==NULL) return ;
        fill(root->left,tree);
        tree.push_back(root->val);
        fill(root->right,tree);
    }
    TreeNode* increasingBST(TreeNode* root) {
        vector<int> tree;
        fill(root,tree);
        TreeNode* newRoot = new TreeNode(tree[0]);
        TreeNode* tmp = newRoot;
        for(int i=1;i<tree.size();i++){
            tmp->right = new TreeNode(tree[i]);
            tmp = tmp->right;
        }
        return newRoot;
    }
};
