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
        return root->left==NULL && root->right==NULL;
    }
    void leaf(TreeNode* root,vector<int>& vec){
        if(root==NULL) return;

        if(isLeaf(root)){
            vec.push_back(root->val);
        }
        leaf(root->left,vec);
        leaf(root->right,vec);
    }
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int> t1 ; leaf(root1,t1);
        vector<int> t2 ; leaf(root2,t2);
        return t1==t2;
    }
};
