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
#define tn TreeNode*
    TreeNode* deleteNode(TreeNode* root, int key) {
        if(root==NULL) return root;
        if(root->val==key) return helper(root);
        tn ret = root;
        while(root){
            if(root->val>key){
                if(root->left && root->left->val==key){
                    root->left = helper(root->left);
                    break;
                }
                else
                    root = root->left;
            }
            else{
                if(root->right && root->right->val==key){
                    root->right = helper(root->right);
                    break;
                }
                else
                    root = root->right;
            }
        }
        return ret;
    }
    tn helper(tn root){
        if(root->left==NULL) return root->right;
        if(root->right==NULL) return root->left;
        tn rC = root->right;
        tn lR = lastRight(root->left);
        lR->right = rC;
        return root->left;
    }
    tn lastRight(tn root){
        if(root->right==NULL) return root;
        return lastRight(root->right);
    }
};
