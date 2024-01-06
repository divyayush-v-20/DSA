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
    vector<int> largestValues(TreeNode* root) {
        vector<int> maxV;
        if(root==NULL) return maxV;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            int m = INT_MIN;
            for(int i=0;i<n;i++){
                TreeNode *f = q.front();
                q.pop();
                m = max(m,f->val);
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            maxV.push_back(m);
        }
        return maxV;
    }
};
