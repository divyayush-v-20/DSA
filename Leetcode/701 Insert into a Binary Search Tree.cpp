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
#define tn TreeNode
    TreeNode* insertIntoBST(TreeNode* root, int val) {
        if(root==NULL){
            return new tn(val);
        }
        tn* tmp = root;
        while(true){
            if(tmp->val>=val){
                if(tmp->left) tmp = tmp->left;
                else{
                    tmp->left = new tn(val);
                    break;
                }
            }
            if(tmp->val<val){
                if(tmp->right) tmp = tmp->right;
                else{
                    tmp->right = new tn(val);
                    break;
                }
            }
        }
        return root;
    }
};
