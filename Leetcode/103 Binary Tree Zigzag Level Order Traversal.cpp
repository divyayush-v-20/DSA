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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        if(root==NULL) return ans;
        queue<TreeNode*> q;
        q.push(root);
        int in;
        bool dir = true;
        while(!q.empty()){
            int s = q.size();
            vector<int> tmp(s);
            for(int i=0;i<s;i++){
                TreeNode *f = q.front();
                q.pop();
                if(f->left!=NULL) q.push(f->left);
                if(f->right!=NULL) q.push(f->right);
                if(dir) in= i;
                else in=s-i-1;
                tmp[in] = f->val;
            }
            dir=!dir;
            ans.push_back(tmp);
            
        }
        return ans;
    }
};
