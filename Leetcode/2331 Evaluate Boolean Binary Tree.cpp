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
    bool operation(int root,int left,int right){
        if(root==2){
            return (left || right);
        }
        if(root==3){
            return (left &&  right);
        }
        return 0;
    }
    bool isLeaf(TreeNode* root){
        return (!root->left && !root->right);
    }
    bool evaluateTree(TreeNode* root) {
        if(isLeaf(root)){
            return root->val;
        }
        bool leftEval = evaluateTree(root->left);
        bool rightEval = evaluateTree(root->right);
        return operation(root->val,leftEval,rightEval);
    }
};
