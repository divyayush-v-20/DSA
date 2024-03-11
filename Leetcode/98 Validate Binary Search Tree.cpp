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
#define ll long long
    void fillStack(tn root,stack<ll>& s){
        if(root==NULL) return;
        fillStack(root->left,s);
        s.push(root->val);
        fillStack(root->right,s);
    }
    bool isValidBST(TreeNode* root) {
        stack<ll> s;
        fillStack(root,s);
        while(s.size()!=1){
            ll t = s.top();
            s.pop();
            if(s.top()>=t) return false;
        }
        return true;
    }
};
