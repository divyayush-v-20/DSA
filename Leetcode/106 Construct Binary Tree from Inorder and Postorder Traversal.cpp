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
    TreeNode* buildTree(vector<int>& inorder, vector<int>& postorder) {
        map<int,int> mp;
        for(int i=0;i<inorder.size();i++){
            mp[inorder[i]] = i;
        }
        TreeNode* root = buildTree(inorder,0,inorder.size() - 1,
                                    postorder,0,postorder.size() - 1,mp);
        return root;
    }
    TreeNode* buildTree(vector<int>& inorder,int is,int ie,
    vector<int>& postorder,int ps,int pe,map<int,int>& mp){
        if(is>ie || ps>pe) return NULL;
        TreeNode* root = new TreeNode(postorder[pe]);
        int rootPosi = mp[root->val];
        int nLeft = rootPosi - is;

        root->left = buildTree(inorder,is,rootPosi-1,postorder,ps,ps+nLeft-1,mp);
        root->right = buildTree(inorder,rootPosi+1,ie,postorder,ps+nLeft,pe-1,mp);

        return root;
    }
};
