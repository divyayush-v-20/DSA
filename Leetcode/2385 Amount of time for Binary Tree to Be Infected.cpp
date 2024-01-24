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
    TreeNode* mappingParent(TreeNode* root,int start,map<TreeNode*,TreeNode*>& mp){
        queue<TreeNode*> q;
        q.push(root);
        mp[root] = NULL;
        TreeNode* ret = NULL;
        while(!q.empty()){
            TreeNode* f = q.front();
            q.pop();

            if(f->val==start) ret = f;
            if(f->left){
                q.push(f->left);
                mp[f->left] = f;
            }
            if(f->right){
                q.push(f->right);
                mp[f->right] = f;
            }
        }
        return ret;
    }
    int burnTree(TreeNode* root,map<TreeNode*,TreeNode*>& mp){
        map<TreeNode*,bool> vis;
        queue<TreeNode*> q;
        q.push(root);
        vis[root] = true;
        int time = 0;
        while(!q.empty()){
            bool flag = false;
            int s = q.size();
            for(int i=0;i<s;i++){
                TreeNode* f = q.front();
                q.pop();

                if(f->left && !vis[f->left]){
                    flag = true;
                    q.push(f->left);
                    vis[f->left] = true;
                }
                if(f->right && !vis[f->right]){
                    flag = true;
                    q.push(f->right);
                    vis[f->right] = true;
                }
                if(mp[f] && !vis[mp[f]]){
                    flag = true;
                    q.push(mp[f]);
                    vis[mp[f]] = true;
                }
            }
            if(flag) time++;
        }
        return time;
    }
    int amountOfTime(TreeNode* root, int start) {
        map<TreeNode*,TreeNode*> mp;
        TreeNode* startN = mappingParent(root,start,mp);
        int ans = burnTree(startN,mp);
        return ans;
    }
};
