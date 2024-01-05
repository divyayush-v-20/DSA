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
        vector<int> max;
        if(root==NULL) return max;
        queue<TreeNode*> q;
        q.push(root);
        while(!q.empty()){
            int n = q.size();
            stack<int> s;
            s.push(INT_MIN);
            for(int i=0;i<n;i++){
                TreeNode *f = q.front();
                q.pop();
                if(f->val >= s.top()){
                    s.pop();
                    s.push(f->val);
                }
                if(f->left) q.push(f->left);
                if(f->right) q.push(f->right);
            }
            max.push_back(s.top());
            s.pop();
        }
        return max;
    }
};
