/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    TreeNode* parentMapping(TreeNode* root,TreeNode* target,map<TreeNode*,TreeNode*>& mp){
        TreeNode* ans = NULL;
        queue<TreeNode*> q;
        q.push(root);
        mp[root] = NULL;
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();

            if(f->val == target->val){
                ans = f;
            }

            if(f->left){
                mp[f->left] = f;
                q.push(f->left);
            }
            if(f->right){
                mp[f->right] = f;
                q.push(f->right);
            }
        }
        return ans;
    }
    vector<int> findNodes(TreeNode* root, map<TreeNode*,TreeNode*>& mp, int k){
        int dist = 0;
        vector<int> ans;
        map<TreeNode*,bool> vis;
        queue<TreeNode*> q;
        q.push(root);
        vis[root] = true;
        while(!q.empty()){
            int s = q.size();
            bool flag = false;
            for(int i=0;i<s;i++){
                TreeNode* f = q.front();
                q.pop();
                if(dist==k){
                    ans.push_back(f->val);
                }
                if(f->left && !vis[f->left]){
                    q.push(f->left);
                    vis[f->left] = true;
                    flag = true;
                }
                if(f->right && !vis[f->right]){
                    q.push(f->right);
                    vis[f->right] = true;
                    flag = true;
                }
                if(mp[f] && !vis[mp[f]]){
                    q.push(mp[f]);
                    vis[mp[f]] = true;
                    flag = true;
                }
            }
            if(flag) dist++;
        }
        return ans;
    }
    vector<int> distanceK(TreeNode* root, TreeNode* target, int k) {
        map<TreeNode*,TreeNode*> mp;
        TreeNode* starting = parentMapping(root,target,mp);
        vector<int> ans = findNodes(starting,mp,k);
        return ans;
    }
};
