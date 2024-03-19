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
    tn* helper(vector<int>& pre,int& i,int ub){
        if(i==pre.size() || pre[i]>ub){
            return nullptr;
        }
        tn* root = new tn(pre[i++]);
        root->left = helper(pre,i,root->val);
        root->right = helper(pre,i,ub);

        return root;
    }
    TreeNode* bstFromPreorder(vector<int>& preorder) {
        int i = 0;
        return helper(preorder,i,1001);
    }
};
