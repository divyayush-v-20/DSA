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
    bool isLeaf(TreeNode* root){
        return (!root->left && !root->right);
    }
    void helper(TreeNode* root,string tmp,string& arrow,vector<string>& vec){
        if(root==NULL) return;
        if(isLeaf(root)){
            tmp+=to_string(root->val);
            vec.push_back(tmp);
            return;
        }
        helper(root->left,tmp+to_string(root->val)+arrow,arrow,vec);
        helper(root->right,tmp+to_string(root->val)+arrow,arrow,vec);
    }
    vector<string> binaryTreePaths(TreeNode* root) {
        string arrow = "->";
        string tmp = "";
        vector<string> vec;
        helper(root,tmp,arrow,vec);
        return vec;
    }
};
