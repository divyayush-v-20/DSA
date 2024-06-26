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
    int maxPathSum(TreeNode* root) {
        int ans = INT_MIN;
        solve(root,ans);
        return ans;
    }
    int solve(TreeNode* root,int& ans){
        if(root==NULL) return 0;

        int ls = max(0,solve(root->left,ans));
        int rs = max(0,solve(root->right,ans));

        ans = max(ans,(ls+rs)+root->val);

        return (root->val + max(ls,rs));
    }
};
