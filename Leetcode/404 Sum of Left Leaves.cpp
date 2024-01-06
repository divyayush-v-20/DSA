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
    bool isLeaf(TreeNode* root){
        if(root==NULL) return false;
        return (root->left==NULL && root->right==NULL);
    }
    int sumOfLeftLeaves(TreeNode* root) {
        int ans = 0;
        if(root!=NULL){
            if(isLeaf(root->left)){
                ans+=root->left->val;
            }
            else{
                ans+=sumOfLeftLeaves(root->left);
            }
            ans+=sumOfLeftLeaves(root->right);
        }
        return ans;
    }
};
