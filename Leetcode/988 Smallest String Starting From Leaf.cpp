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
    void help(TreeNode* root,vector<string>& strings,string str){
        if(!root){
            return;
        }
        str.push_back(char(root->val + 'a'));
        if(!root->left && !root->right){
            reverse(str.begin(),str.end());
            strings.push_back(str);
        }
        else{
            help(root->left,strings,str);
            help(root->right,strings,str);
        }
    }
    string smallestFromLeaf(TreeNode* root) {
        if(!root){
            return "";
        }
        vector<string> strings;
        string str = "";
        help(root,strings,str);
        sort(strings.begin(),strings.end());
        return strings[0];
    }
};
