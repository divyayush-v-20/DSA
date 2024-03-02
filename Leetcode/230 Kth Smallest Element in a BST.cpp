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
    void fillSet(tn root,set<int>& s){
        if(root==NULL) return;
        s.insert(root->val);
        fillSet(root->left,s);
        fillSet(root->right,s);
    }
    int kthSmallest(TreeNode* root, int k) {
        if(root==NULL) return -1;
        set<int> s;
        fillSet(root,s);
        for(int i:s){
            k--;
            if(k==0) return i;
        }
        return -1;
    }
};
